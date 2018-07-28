# Irrigation system via Open weather Forecast and Particle Photon. 

We have to explain first the why's before the know how's.

The use of tracking the forecast of the weather is the main purpose of the project itself, that is to optimize water usage.

What use there is of having a sensor that tracks that the soil is dry and activate an irrigation system with that info, but it is going to rain that same day?

We can save a lot of water simply by using the weather forecast systems available to notify our platform that it is going to rain and stop from using water that day.

And of course we want to automate everything.

Without further ado:

1.- Get to: https://openweathermap.org/ and Sign up.

2.- After that then simply go to Sign In and click on API Keys, then copy the API KEY.

<img src="https://image.ibb.co/nvKpTo/openweather.jpg">

3.- Go then to your Node-RED flow. Remember the openweathermap node? Drag it to the Node-RED dashboard and configure it like so:

<img src="https://image.ibb.co/k1DV18/apikeyweather.jpg">

4.- Remember to paste an "Inject" node before, a "function" node after and also a "debug" node if you wish to check what has been transfered.

<img src="https://image.ibb.co/dMt8oo/openw.jpg">

Double click the function node and paste the following code:

'''Javascript
msg.payload= msg.payload[0].weather[0].main
msg.count = msg.payload
return msg;'''

What this does is to seek the weather condition that we desire which is "Rain" and it puts it into the payload of the flow.

You can also grab a Text Dashboard node and connect it to this flow to get this info to the dashboard.

5.-
