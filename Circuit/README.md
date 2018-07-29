# Circuit Characteristics:

This is the implementation of the necessary circuits for the system.

# Table of contents
* [Sigfox Module](#sigfox-module)
* [Valve Module](#valve-module)
* [Real Implementation](#real-implementation)

## Sigfox Module: 

To complete this circuit, we used the Pycom FiPy dev board to send information to Sigfox, and the Arduino Mini Pro to receive information and control the sensors. We then link these two devices via serial communication at 9600 baud. This uses the extensive libraries of the Arduino Ecosystem so the proyect may be expanded further without limits.

Bill of Materials:

- Arduino Mini Pro (or any other Arduino board).
- Pycom FyPy Board (or SyPy).
- Moisture sensor.(preferably Capacitive)
- DHT11 Sensor.
- DS18B20 Sensor.
- 3 Resistances of 1kohm.
- 1 Resistance of 4.7kohm.
- LiPo Raider Pro.(Driver Module for Baterry and Solar Cell).
- Solar Cell (5V, 500mA).
- Lithium Battery (3.7v, 500mA).
- Cable, Solder, Jump wire or similar.

<img src="https://image.ibb.co/hpCnG8/Circuito_Agro.png" width="800">

## Valve Module: 

Once the main circuit is completed, make the automated irrigation valve.

Bill of Materials:

- Photon Particle (or any other Wifi board).
- TIP120
- 12v Source.
- Solenoid Valve Nc 1/2.
- Diode 1N4007.
- 1 Resistances of 2.2kohm.
- Cable, Solder, Jump wire or similar.

<img src="https://image.ibb.co/bHtuw8/Circuit_Agrovalve.png" width="500">

## Real Implementation: 

We show an example of the actual implementation of the circuit.

<img src="https://image.ibb.co/go3g8o/20180727_193833006_i_OS.jpg" width="500">
