// Include the libraries we need
#include <OneWire.h>
#include <DallasTemperature.h>
#include "DHT.h"
#include <SoftwareSerial.h>

// All define components
#define ONE_WIRE_BUS A1
#define humedad A3
#define temp    A2
#define DHTTYPE DHT11
#define minu 60000

// Setup libraries variables
OneWire oneWire(ONE_WIRE_BUS);
DHT dht(temp, DHTTYPE);
SoftwareSerial mySerial(13, 10); // RX(DONT CARE) , TX (Pycom Serial Communication)

// DallasTemperature sensors definition
DallasTemperature sensors(&oneWire);

/*
 * The setup function. We only start all sensors here
 */
void setup(void)
{ 
  mySerial.begin(9600);
  Serial.begin(9600);
  sensors.begin();
  dht.begin();
}

/*
 * Main function, get all the sensor data
 */
void loop(void)
{
  sensors.requestTemperatures();
  int hume = analogRead(humedad);
  int hum  = map(hume, 0, 1023, 0, 950);
  int humes = -(hum*100)/950;
  int h = int(dht.readHumidity());
  int t = int(dht.readTemperature());
  int hica = int(dht.computeHeatIndex(t, h,false));
  int te = int(sensors.getTempCByIndex(0)); // Send the command to get temperatures
  int hice = int(dht.computeHeatIndex(sensors.getTempCByIndex(0), ((hum*100)/950),false));

// Serial Strings Declaration

  String dte;
  String dhume;
  String dhe;
  String dta;
  String dhuma;
  String dha;


  // These conditional forces the serial string to have the format of two digits for each value

  if (te < 10)
  {
    dte=String(0)+String(te);
  }
  else
  {
    dte=String(te);
  }
  if (humes < 10)
  {
    dhume=String(0)+String(humes);
  }
  else
  {
    dhume=String(humes);
  }
  if (hice < 10)
  {
    dhe=String(0)+String(hice);
  }
  else
  {
    dhe=String(hice);
  }
    if (t < 10)
  {
    dta=String(0)+String(t);
  }
  else
  {
    dta=String(t);
  }
    if (h < 10)
  {
    dhuma=String(0)+String(h);
  }
  else
  {
    dhuma=String(h);
  }
    if (hica < 10)
  {
    dha=String(0)+String(hica);
  }
  else
  {
    dha=String(hica);
  }
  
  mySerial.print(dte+dhume+dhe+dta+dhuma+dha);  // We send sensor data by serial to pycom
  Serial.println(dte+dhume+dhe+dta+dhuma+dha);  // This serial string is only for debugging
  delay(6*minu); // Update Frecuency Sensor Values, in this case 6 minutes, 120 data by day
}
