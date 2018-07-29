# Irrigation system via Open weather Forecast and Particle Photon. 

We have to explain first the why's before the know how's.

The use of tracking the forecast of the weather is the main purpose of the project itself, that is to optimize water usage.

What use there is of having a sensor that tracks that the soil is dry and activate an irrigation system with that info, but it is going to rain that same day?

We can save a lot of water simply by using the weather forecast systems available to notify our platform that it is going to rain and stop from using water that day.

And of course we want to automate everything.

Without further ado:

1.- Get to: https://openweathermap.org/ and Sign up.

2.- After that then simply go to Sign In and click on API Keys, then copy the API KEY.

<img src="https://image.ibb.co/nbVJOo/68747470733a2f2f696d6167652e6962622e636f2f6e764b70546f2f6f70656e776561746865722e6a7067.jpg
">

3.- Go then to your Node-RED flow. Remember the openweathermap node? Drag it to the Node-RED dashboard and configure it like so:

<img src="https://image.ibb.co/jdGsio/68747470733a2f2f696d6167652e6962622e636f2f6b31445631382f6170696b6579776561746865722e6a7067.jpg">

4.- Remember to paste an "Inject" node before, a "function" node after and also a "debug" node if you wish to check what has been transfered.

<img src="https://image.ibb.co/d9nMb8/68747470733a2f2f696d6167652e6962622e636f2f644d74386f6f2f6f70656e772e6a7067.jpg">

Double click the function node and paste the following code:

```Javascript
msg.payload= msg.payload[0].weather[0].main
msg.count = msg.payload
return msg;
```

What this does, is to seek the weather condition that we desire which is "Rain" and it puts it into the payload of the flow.

You can also grab a Text Dashboard node and connect it to this flow to get this info to the dashboard.

5.- Get a Particle Photon and build the following circuit:

https://github.com/EddOliver/AggroFox/tree/master/Circuit#valve-module

6.- Go to your particle IDE and paste the following Code:

https://github.com/EddOliver/AggroFox/blob/master/Irrigation%20System/Photoncode.ino

The main point of the code is understanding that it creates a function that can be accessed via the particle cloud. Whenever you input certain conditions to that functions externally you can do some previous programmed actions.

Flash it and go back to Node-RED. If you need aditional help with the Photon go directly to www.particle.io/start for a great place to begin.

7.- Now in Node-RED make a flow like so:

<img src="https://image.ibb.co/n88SG8/68747470733a2f2f696d6167652e6962622e636f2f6e794f47386f2f7061727469636c652e6a7067.jpg">

The Particle node is indeed the function node.

8.- Double click on the Particle node and click on the pencil on "Add new particle cloud". Then fill it like so:

<img src="https://image.ibb.co/kyWgb8/68747470733a2f2f696d6167652e6962622e636f2f6778343942382f7061727469636c65312e6a7067.jpg">

Your access token is in your particle IDE, Devices section and clicking on the current device you are using.
Update and in the next screen fill it with your device name that you can get on the Particle IDE and also on "CLoud Function" input "led".

9.- Now your Particle Photon node is configured to get an "on" or "off" payload and do the appropriate action with it. 

10.- To configure properly the email node you have to log in to your gmail account and then go to: http://myaccount.google.com/u/1/lesssecureapps and turn it on, if you followed this guide accordingly, you set a password and username to your Node-RED so this procedure should be safe.

Then just fill the required fields.


11.- The most important step:

Finally, you have reached the ending of this tutorial so you have an idea of how to do the main parts of the project. Next is to do your own and use the concepts to get to a final product like the one presented here. There is also the main Flow that we did but we strongly suggest the reader to cultivate their own so you can have a great information harvest.

Example code with some hints: https://github.com/EddOliver/AggroFox/blob/master/IBM%20cloud%20AggroFox/noderedflow.txt

Keep Hacking!





