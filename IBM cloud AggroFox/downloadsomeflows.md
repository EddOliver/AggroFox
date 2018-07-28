# Getting those sick flows!

1.- In your Node-RED dashboard go to the burger and to manage palette.

<img src="https://image.ibb.co/i44Sw8/managepalette.jpg">

2.- Then go to install.

<img src="https://preview.ibb.co/gEgqG8/install.jpg">

3.- Type "Dashboard" and install the Node-RED dashboard!

<img src="https://preview.ibb.co/iRyLG8/dashboard1.jpg">

4.- Repeat the same process with the openweathermap node typing "openweathermap".

5.- Get an "inject" node, a "http request", a "function" and a dashboard "gauge" node into the Node-RED dashboard:

<img src="https://image.ibb.co/hkyG8o/nodes.jpg">

6.- Now here comes the part to sync everything to the thingspeak API.

Double click on the http request node and fill it like so:

<img src="https://image.ibb.co/jUyf18/json.jpg">

Leave the URL alone for a bit.

Go to your thingspeak channel for the project. Go to Data Import/export. There you can see the "Get a Channel Feed" channel that will give you an idea of how to fill the URL field in the Node-RED node.

<img src="https://image.ibb.co/fwKsET/thingspeako.jpg">

Now go to the Node-RED flow and fill the URL field like so: https://api.thingspeak.com/channels/YOUR-CHANNEL/feeds/last.json?api_key=YOUR-API-KEY

Click on Done.

7.- Go to the "function" node rename it to "Field 1" and paste the next code:

msg.payload = msg.payload.field1
msg.topic= msg.payload;
return msg;

Here you are setting the payload to be the content of the field 1 of the last json of thinkspeak.

You can check the last json that thingspeak sent by going to: https://api.thingspeak.com/channels/YOUR-CHANNEL/feeds/last.json?api_key=YOUR-API-KEY

8.- Go to the "gauge" flow. Double click on it. There you can fill the requeriments like the image below and then click to set a new group UI.

<img src="https://image.ibb.co/mqNR8o/gauge.jpg">

Set a new group UI like so:

<img src="https://image.ibb.co/ej5eTo/gauge1.png">

Click on update and then Done.


9.- Now you have everything to create an amazing dashboard! Get to creating the next modules doing the same procedure and you can check also the sample finished flow!
