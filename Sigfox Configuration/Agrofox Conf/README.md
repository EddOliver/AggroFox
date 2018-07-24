# Agrofox

Congratulations! You are here to learn how to configure our Agrofox application in a simple way so you can take your trip to the wonderful technology of Sigfox and its application with pages like Bluemix and Thingspeak.

# Thingspeak Configuration

A travez de la plataforma de Sigfox https://backend.sigfox.com vamos a utilizar sus herramientas de devolución de llamada para realizar la publicación de la página de cosas, para ello la primera parte para la configuración del canal de datos en https://thingspeak.com .

1.- Sign in or Create a free account.

2.- Create your Channel and it creates all the fields it requires for your data (Maximum 12, because the sigfox technology only allows 12 bytes per package of information sent), in the case of our application there will be 6 fields.

<img src="https://image.ibb.co/cmkgio/Canalnuevo.png" width="280"> <img src="https://image.ibb.co/meqspT/Datos.png" width="280"> <img src="https://image.ibb.co/hsX59T/create.png" width="280">

Our Fields:

- Temperature Earth [C°]
- Moisture Earth [%]
- Heat Index Earth [C°]
- Temperature Air [C°]
- Humidity Air [%]
- Heat Index Air [C°]

<img src="https://image.ibb.co/djsDUT/graficos.png" width="740"> 

3.- Sign in or Create a free account.

3.1.- Enter in your Device type.

<img src="https://image.ibb.co/eDO6G8/callback1.png" width="740"> 

3.2.- Enter in your Callback Configuration.

<img src="https://image.ibb.co/cBh0b8/callback2.png" width="740"> 

3.3.- Create your custom callback.

<img src="https://image.ibb.co/mznmio/Custom.png" width="740"> 

3.3.1.- In this section we have to configure 2 fundamental things, the data we will receive in Sigfox and how we will send them to the website, in this case for our application we will receive 6 bytes of information, which are declared "Custom payload config" , for example:

Let's look at this variable: tempe :: uint: 8

- Name of the variable ---> tempe
- Type of variable ---> uint (variable unsigned int)
- Bit length of the data ---> 8

This is the payload that we will send with all our variables:

"tempe :: uint: 8 hume :: uint: 8 inde :: uint: 8 tempa :: uint: 8 huma :: uint: 8 inda :: uint: 8"




