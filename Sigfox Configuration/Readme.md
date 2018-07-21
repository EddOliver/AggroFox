# Sigfox

The first step to be able to use the Sigfox services, you must have the necessary hardware like the ones shown on the official website: https://partners.sigfox.com/products/device

In this project, we are using a Pycom Fipy Board, which in addition to the services of LoRa, LTE Cat-M1 / NB-IoT, Wifi, Etc... has the embebed service of Sigfox, in addition to a free subscription for two years to their platform.

# How to configure my device?

Each of the different models of boards that use this technology have different ways to register the component and activate the Sigfox service, but in general they have some points in common.

1.- Perform the firmware update of the device to the latest version.

1.1- In the specific case of the Pycom board, it is necessary to update it through the page Pybytes and also use the software to update it. 

1.11- WebPage:  https://pybytes.pycom.io/

1.12- Firmware: https://docs.pycom.io/chapter/gettingstarted/installation/firmwaretool.html

2.- Obtain the Device ID and PAC number from your board.

2.1- For Pycom card this is easily obtained after doing a software update.

2.11-Automatically the program indicates both numbers and indicates the number for the LoRa registration (in case you also save it for another project).

3.- Make the registration of your hardware on the official website of Sigfox.

3.1- The registration on the page is very simple, it is also good practice to give some information of your project in the registry to support the company to improve their services.

3.11- WebPage: https://buy.sigfox.com/ 

3.111- Clic in this button "Activate my DevKit"


