# Pycom Update

To ensure that the Pycom works with the latest firmware and will have installed the latest libraries, you will have to perform the following steps:

1.- Perform the firmware update of the device to the latest version.

2.- In the specific case of the Pycom board, it is necessary to update it through the page Pybytes and also use the software to update it.

2.1- WebPage: https://pybytes.pycom.io/

2.2- Firmware update tool: https://docs.pycom.io/chapter/gettingstarted/installation/firmwaretool.html

# Pycom Configuration

To be able to make the codes corresponding to the Pycom it is recommended to use the Atom program with the corresponding library, as shown in the following link.

Link: https://docs.pycom.io/chapter/pymakr/installation/atom.html

1.- Once we have been able to connect to the Pycom, we will generate a new project on the PC and inside the project folder we will create a file called main.py

2.- Once the file is created, we copy and paste the code provided in this folder and we will put it "UPLOAD" so that the code is saved in the flash memory of the card and run every time it is turned on.

3.- To make sure the card is running the code once we have uploaded the code check the next indications.

- The card will turn on and turn off the indicator light in white 2 times, indicating that the program started successfully

- The board turns on a blank RGB LED when the data is sent to Sigfox and will turn off when the shipment is finished to wait for a new serial string from the Arduino.

