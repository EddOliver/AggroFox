<img src="https://image.ibb.co/kCoXeT/chacala.png">

AggroFox notification, dashboard and analytics for in house and large-scale agriculture using sigfox technology.

<img src="https://image.ibb.co/bGpAYo/agrofox.png" width="800">

# Table of contents
* [Introduction](#introduction)
* [Problematic](#problematic)
* [Our Solution](#our-solution)
* [Where should I start?](#where-should-i-start)
* [References](#references)

## Introduction:

Imagine a world where there is not enough food for you and your loved ones, an arid world where there is nothing to satisfy your hunger, because the current methods of agriculture, where excess fertilizers and pestices are used, do not allow sustainable agriculture.

## Problematic:

<img src="http://images.teinteresa.es/tierra/Campo-debido-prolongada-sequia-verano_TINIMA20120726_0294_5.jpg" width="800">

• The population in Mexico and in the world takes advantage.

• By 2050 the production of food suppose that double.

• The amount of arable land does not increase.

• The amount of water available it is decreasing.

• Disruption is needed sustainable.

If only there was a way to monitor the field through a network of sustainable sensors, which could be monitored in real time 365 days a year, performing data analytics in the cloud to generate a sustainable risk taking information from the environment and above all being powered by solar cells ....... oh wait, there is Aggrofox!

## Our Solution:

Our solution to the problem is to realize a sustainable model of sensing and irrigation automation.

<img src="https://image.ibb.co/kApd4T/Esquematico.png" width="800">

1.- Using temperature and humidity sensors for air and ground we use an Arduino controller to obtain sensor data every 6 min.

1.1.- Each sensing is done at this frequency to send 120 data per day and not pass the data quota of Sigfox which is 140 data per day.

1.2.- For this system it was decided to use an Arduino board to obtain the data and send them through Serial at 9600 baud rate to the Pycom board.

1.3.- Once on the Pycom board we receive the data from the sensors and through Sigfox we send them to your Sigfox Backend platform.

<img src="https://image.ibb.co/b04QZT/Agrofox_bb.png" height="210"><img src="https://image.ibb.co/eJodM8/Circuit_Agrovalve.png" height="210"><img src="https://image.ibb.co/nm4M8o/20180722_232844304_i_OS.jpg" height="210">

|-------------------A: Principal Circuit----------------------------------B: Solenoid Valve----------------C: Real Implementation----------------|

2.- Once the data in the platform of Sigfox Backend send the data through a callback to the website of Thingspeak through its API (more information in the link below).

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Aggrofox%20Conf

3.- Once we have the data in Thingspeak, through the thingspeak API we obtain the data to IBM Bluemix.

3.1.- Once on the Bluemix platform, we made it possible to develop almost any application with the obtained data (All the applications were based on Node Red to make the prototype easier).

3.1.1.- Examples of these applications:

3.1.1.1.- Generate databases of our crops and their conditions.

3.1.1.2.-  Do data analysis to obtain predictive models in the long term.

3.1.1.3.-  Water automatization systems with the data obtained (as we do in this project).

3.2.- We made a Dashboard with the data obtained for the complete and simple visualization of the data.

<img src="https://image.ibb.co/ejny4T/nodedash.jpg">

3.2.1.- For the application we made, we made a data crossing with the OpenWeatherMap API, to perform the control of an electrovalve connected to a Particle Photon microcontroller.

3.2.2.- The crossing of data obtained is used to check if that day is going to rain and thus not use irrigation water in crops.

3.2.3.- Also if the system detects that water is needed in the field by the humidity sensors, the irrigation system is turned on.

3.3.- In turn once a day an email will be sent to the farmer with the general information of his field.


## Where should I start:

1.-Do the first configuration for your board.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/First%20Configuration

2.- Enter the folder of AggroFox Configuration and complete all the steps to perform the corresponding configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Aggrofox%20Conf

3.- Do the Arduino configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Arduino%20Code

4.- Do the Pycom configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Pycom%20Code

5.- Make the circuit:

Link: https://github.com/EddOliver/AggroFox/tree/master/Circuit

6.- Link it to IBM IoT Cloud for amazing dashboards, data storage and access to other cloud services.

Link: https://github.com/EddOliver/AggroFox/tree/master/IBM%20cloud%20AggroFox

7.- Automation of irrigation via IBM cloud with weather forecast.

Link: https://github.com/EddOliver/AggroFox/tree/master/Irrigation%20System

8.- Going Green (Add a Solar panel to your sensor module).

Link: https://github.com/EddOliver/AggroFox/tree/master/Solar%20Power

Enjoy!!

# References:

All the information about the technology used and direct references are in our wiki:

Wiki: https://github.com/EddOliver/AggroFox/wiki
