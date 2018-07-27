<img src="https://image.ibb.co/kCoXeT/chacala.png">

AggroFox notification, dashboard and analytics for in house and large-scale agriculture using sigfox technology.

<img src="https://image.ibb.co/bGpAYo/agrofox.png" width="800">

# Table of contents
* [Introduction](#introduction)
* [Our Solution](#our-solution)
* [Where should I start?](#where-should-i-start)

## Introduction:



## Our Solution:

Our solution to the problem is to realize a sustainable model of sensing and irrigation automation.

<img src="https://image.ibb.co/jCENyo/Esquematico.png" width="800">

1.- Using temperature and humidity sensors for air and ground we use an Arduino controller to obtain sensor data every 6 min.

1.1.- Each sensing is done at this frequency to send 120 data per day and not pass the data quota of Sigfox which is 140 data per day.

1.2.- For this system it was decided to use an Arduino board to obtain the data and send them through Serial at 9600 baud rate to the Pycom board.

1.3.- Once on the Pycom board we receive the data from the sensors and through Sigfox we send them to your Sigfox Backend platform.

2.- Once the data in the platform of Sigfox Backend send the data through a callback to the website of Thingspeak through its API (more information in the link below).

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Agrofox%20Conf)

3.- DOC DESDE AQUI TU DESCRIBES.


## Where should I start:

1.-Do the first configuration for your board.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/First%20Configuration

2.- Enter the folder of Agro Fox Configuration and complete all the steps to perform the corresponding configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Agrofox%20Conf

3.- Do the Arduino configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Arduino%20Code

4.- Do the Pycom configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Pycom%20Code

5.- Make the circuit:

Link: https://github.com/EddOliver/AggroFox/tree/master/Circuit

6.- Link it to IBM IoT Cloud for amazing dashboards, data storage and access to other cloud services.

Link: https://github.com/EddOliver/AggroFox/tree/master/IBM%20cloud%20AggroFox

7.- Automation of irrigation via IBM cloud with weather forecast!!!

8.- Enjoy!

