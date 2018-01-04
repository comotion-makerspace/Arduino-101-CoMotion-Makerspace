/*
 CoMotion MakerSpace 2018
 Edited by: Ramon Qu
 Arduino 101 Basic Workshop
 Example 4  Analog Input - Potentiometer
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/AnalogInput
 */

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor: The value would be range from 0 to 1023
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}

/*
//More Experiments:
//     By using the input value (sensor Value), try to control the
//     brightness of the LED.
//     You may use a new Command called, analogWrite(PIN, Value);
//https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/
//     The range of value in this command is between 0 and 255
//     in order to map the value from range 0- 1023 to 0 - 255,
//     you may use Map function, val = map(val, 0, 1023, 0, 255);
//https://www.arduino.cc/reference/en/language/functions/math/map/
//
//
//   The final code is in the README file.
*/
