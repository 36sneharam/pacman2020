#include <HCSR04.h>

//Modify for your pin setup 
int triggerpin = 9; 
int echopin = 8; 


UltraSonicDistanceSensor distanceSensor(triggerpin, echopin);  // Initialize sensor

void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
}

void loop () {
    // Every 500 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    Serial.println(distanceSensor.measureDistanceCm());
    delay(50);
}
