# Circuit Characteristics:

# Table of contents
* [Sigfox Module](#sigfox-module)
* [Valve Module](#valve-module)

## Sigfox Module: 

To complete this circuit, we use the Pycom FiPy dev board to send information to Sigfox, and the Arduino Mini Pro to receive information and control the sensors. We then link these two devices via serial communication at 9600 baud. This uses the extensive libraries of the Arduino Ecosystem so the proyect may be expanded further without limits.

Bill of Materials:

- Arduino Mini Pro (or any other Arduino board).
- Pycom FyPy Board (or SyPy).
- Moisture sensor.(preferably Capacitive)
- DHT11 Sensor.
- DS18B20 Sensor.
- 3 Resistances of 1kohm.
- 1 Resistance of 4.7kohm.
- Cable, Welding, Jump wire or similar.

<img src="https://image.ibb.co/kqWAb8/Agrofox_bb.png" width="800">

## Valve Module: 

Once the main circuit is completed, perform the automated irrigation valve.

Bill of Materials:

- Photon Particle (or any other Wifi board).
- TIP120
- 12v Source.
- Valve Solenoid Nc 1/2.
- Diode 4007.
- 1 Resistances of 2.2kohm.
- Cable, Welding, Jump wire or similar.

<img src="https://image.ibb.co/eJodM8/Circuit_Agrovalve.png" width="400">

