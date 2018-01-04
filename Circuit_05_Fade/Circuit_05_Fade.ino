/*
 CoMotion MakerSpace 2018
 Edited by: Ramon Qu
 Arduino 101 Basic Workshop
 5 - Fade
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/
 The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be
 sure to use another PWM[Pulth Width Manipulation] capable pin. On most
 Arduino, the PWM pins are identified with
 a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.
More reading about PWM: https://www.arduino.cc/en/Tutorial/PWM
 This example code is in the public domain.
 */

int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // initialize how bright the LED is (between 0 - 255)
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // set the brightness of pin 9:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
/*
Experience:
  Try to change the fadeAmount to see what changes.
*/
