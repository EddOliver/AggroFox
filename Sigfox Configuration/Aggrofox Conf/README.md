# Aggrofox

Congratulations! You are here to learn how to configure our Aggrofox application in a simple way so you can take your trip through the wonderful technology of Sigfox and its applications with services like IBM cloud and Thingspeak.

# Thingspeak Configuration

Through the platform of Sigfox> https://backend.sigfox.com, we will use its callback tools to make a publication in Thingspeak, for that, we will configure the data channel in https: //thingspeak.com

1.- Sign in or Create a free account.

2.- Create your Channel so it creates all the fields it requires for your data (Maximum 12, because the sigfox technology only allows 12 bytes per package of information sent), in the case of our application there will be 6 fields.

<img src="https://image.ibb.co/cmkgio/Canalnuevo.png" width="280"> <img src="https://image.ibb.co/meqspT/Datos.png" width="280"> <img src="https://image.ibb.co/hsX59T/create.png" width="280">

Our Fields:

- Soil Temperature [C°]
- Soil Moisture [%]
- Soil Heat Index [C°]
- Temperature Air [C°]
- Humidity Air [%]
- Heat Index Air [C°]

<img src="https://image.ibb.co/kJ5k3o/thingspeak.png" width="740"> 

# Sigfox Backend Configuration

1.- Enter your account in the website https://backend.sigfox.com.

2.- Enter your Device type.

<img src="https://image.ibb.co/eDO6G8/callback1.png" width="740"> 

3.- Enter your Callback Configuration.

<img src="https://image.ibb.co/cBh0b8/callback2.png" width="740"> 

4.- Create your custom callback.

<img src="https://image.ibb.co/mznmio/Custom.png" width="740"> 

5.- Set all the fields as indicated below.

<img src="https://image.ibb.co/eBNK3o/send.png" width="740"> 

5.1.- In this section we have to configure two fundamental things, the data we will receive in Sigfox and how we will send them to the website, in this case for our application we will receive 6 bytes of information, which are declared "Custom payload config" , for example:

Let's look at this variable: tempe :: uint: 8

- Name of the variable ---> tempe
- Type of variable ---> uint (variable unsigned int)
- Bit length of the data ---> 8

This is the payload that we will send with all our variables:

"tempe::uint:8 hume::uint:8 inde::uint:8 tempa::uint:8 huma::uint:8 inda::uint:8"

5.2.- To do the POST html that the Thingspeak app requires, and upload data in the graphics, we need to put in the "Url pattern" in the following address with the following data.

"https://api.thingspeak.com/update.json?api_key=YOUR_API_KEY&field1={customData#tempe}&field2={customData#hume}&field3={customData#inde}&field4={customData#tempa}&field5={customData#huma}&field6={customData#inda}"

Explaining a bit each part of the link:

- In the part of the link that says YOUR_API_KEY it is necessary to put the writing API for thingspeak.

- The variables that are in brackets {customData#tempe}, "tempe" are the names of each of the variables declared in the payload.

6.- In the "Use HTTP Method" section, you have to select the GET option.

7.- Once finished that, we put on the sign "OK" and the application will be created.

# Next Step

Once this has been configured, now you have to configure the pycom with the corresponding .py file as indicated in the Pycom Code folder.

Link: https://github.com/EddOliver/AggroFox/tree/master/Pycom%20Code


