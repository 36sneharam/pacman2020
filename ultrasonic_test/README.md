# Installing HCSR04 Library 
The ultrasonic sensor your are given is the HCSR04 sensor. The easiest way to read out the information from the sensor is to install the HCSR04 Library (this is one of many libraries you can find on arduino)

The library you will be installing is this: https://www.arduinolibraries.info/libraries/hcsr04

To install libraries on Arduino, go to the Tools menu and click Manage Libraries. A new window should pop up with a list of libraries. In the search menu, type *HCSR04* and however over the library created by Martin Sosic. Click install and that should be it. 

# Programs to test the sensor 
Here are some pieces of code and wiring instructions to help you get started with using the ultrasonic sensor. 

## 1. Plot/Print Distance (us_printdistance.inu)

Connect the sensor pins like this: 
* vcc to 5V 
* trig to a digital pin (for example 9)
* echo to digital pin (for example 8)
* gnd to gnd 

Modify the arduino code so the trigpin and echopin parameters reflect the digital pins the sensor is using. 

To plot the distance measurements, open up Serial Plotter from the Tools menu. This should open up a new window with a graph. To print the distance measurement, open up Serial Monitor from the Tools menu. This should open up a new window as well. 

Upload the code from us_printdistance.inu to the arduino and move the sensor around. You should see varying distances. 
