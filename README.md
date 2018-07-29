<img src="https://image.ibb.co/fFLSzT/68747470733a2f2f696d6167652e6962622e636f2f6b436f5865542f63686163616c612e706e67.png">

AggroFox is an IoT sensing, notifications, dashboard and analytics platform for urban and large-scale agriculture, with automated irrigation, using Sigfox technology. 

<img src="https://image.ibb.co/n84O68/agrofox_Recuperado.png" width="801">

# Table of contents
* [Introduction](#introduction)
* [Problematic](#problematic)
* [Our Solution](#our-solution)
* [Where should I start?](#where-should-i-start)
* [Future Rollout](#future_rollout)
* [References](#references)

## Introduction:

Imagine a world where there is not enough food for you and your loved ones, an arid world where there is nothing to satisfy your hunger. Because of the current methods of agriculture, where excess fertilizers and pesticides have been used. These methods are not sustainable and we have to find new methods to optimize crops. Remember, we cannot create new land to grow crops, and the water reserves are being reduced each year. For that, Industry 3.0, with IoT, Big Data and predictive analysis solutions have to emerge to avoid this scenario from happening.

## Problematic:

<img src="https://image.ibb.co/nc9HYo/farmer_7591.jpg" width="800">

Let's take a look at some FACTS:

• The population in Mexico (Both of the author's own country) and in the world will grow.

• By 2050 the production of food will have to DOUBLE to feed this population.

• The amount of arable Land will not increase.

• The amount of Water available will be decreasing.

• Sustainable Disruption is needed.

• Current methods are insufficient for this.

• Infrastructure is costly.

• Most fields are in remote areas.

• Urban agriculture needs a cheap and readily available solution, for it to be sustainable.

If only there was a way to monitor the field through a network of sustainable sensors, which could be monitored in real time 365 days a year, performing data analytics in the cloud and taking weather predictions to generate models. Taking all this information to manage resources such as water, in order to save most of them, and above all being powered by solar panels ....... oh wait, there is Aggrofox!

## Our Solution:

Our solution to the problem was to create a sustainable platform of sensing and irrigation automation with predictive analysis via cloud. With one objective in mind: SAVE WATER.

<img src="https://image.ibb.co/dvuWR8/68747470733a2f2f696d6167652e6962622e636f2f6b41706434542f45737175656d617469636f2e706e67.png" width="800">

1.- Using temperature with humidity, soil moisture and soil temperature sensors, we used a Pycom FiPy dev board with Sigfox technology to obtain sensor data every 6 min. Sigfox chosen because the characteristics of long range and low power are excellent for remote areas.

- Each batch of sensing is done at this frequency to send 120 data per day and not pass the data quota of Sigfox which is 140 data packets per day.

- For this system it was decided to use an Arduino board to obtain the data from the sensors (using the vast array of libraries from Arduino) and send them through Serial at 9600 baud rate to the Pycom FiPy board.

- Once on the Pycom board we receive the data from the sensors and through Sigfox we send them to the Sigfox Backend platform.

<img src="https://image.ibb.co/bGNtpT/chacala3.png">

2.- Once the data is in the Sigfox Backend, we send the data through a callback to the Thingspeak website through its API (more information in the link below).

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Aggrofox%20Conf

3.- Once we have the data at Thingspeak, through the Thingspeak API we send the data to IBM Bluemix.

- On the Bluemix platform, we made it possible to develop almost any application with the obtained data. (All the applications are based on Node Red to make the prototyping easier).

- Examples of these applications:

    Generate databases of our crops and their conditions.

    Do data analysis to obtain predictive models in the long term.

    Water automation systems with the data obtained (as we do in this project).
    
    Crop yield analysis.

3.1- We made a Dashboard with the data obtained for the complete and simple visualization of the data.

<img src="https://image.ibb.co/hGifKT/68747470733a2f2f696d6167652e6962622e636f2f656a6e7934542f6e6f6465646173682e6a7067.jpg">

In this image you can see the Node-RED flow and the Dashboard we made.

- For the application, we made a data crossing with the OpenWeatherMap API, to perform the control of an electrovalve connected to a Particle Photon microcontroller.

- The crossing of data obtained is used to check if that day is going to rain and thus not use irrigation water in crops.

- Also if the system detects that water is needed in the field by the humidity sensors, the irrigation system is turned on.

- In turn once a day an email will be sent to the farmer with the general information of his field or he can check anytime on his dashboard.

- Also everytime the irrigation system is online, a notification will be sent.


## Where should I start:

1.-Do the first configuration for your board.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/First%20Configuration

2.- Enter the following folder: AggroFox Configuration, and complete all the steps to perform the corresponding configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Sigfox%20Configuration/Aggrofox%20Conf

3.- Do the Arduino configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Arduino%20Code

4.- Do the Pycom configuration.

Link: https://github.com/EddOliver/AggroFox/tree/master/Pycom%20Code

5.- Make the circuits:

Link: https://github.com/EddOliver/AggroFox/tree/master/Circuit

6.- Link it to IBM IoT Cloud for amazing dashboards, data storage and access to other cloud services.

Link: https://github.com/EddOliver/AggroFox/tree/master/IBM%20cloud%20AggroFox

7.- Automation of irrigation via IBM cloud with weather forecast.

Link: https://github.com/EddOliver/AggroFox/tree/master/Irrigation%20System

8.- Going Green (Add a Solar panel to your sensor module).

Link: https://github.com/EddOliver/AggroFox/tree/master/Solar%20Power

Enjoy!!


# Future Rollout

• Adding a water fluxometer to know exactly how much water we use.

• Custom PCB for all the hardware components.

• Maybe migrate to the SiPy version of the Pycom Board.

• Get the data to a SQL database for long term predictive ML models.

• Expand to the use of several other clouds such as AWS and Google cloud which we already dominate.

• Replace the Particle Photon with Sigfox for the actuators so it uses only one communication platform.


# References:

All the information about the technology used and direct references are in our wiki:

Wiki: https://github.com/EddOliver/AggroFox/wiki
