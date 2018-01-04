/*
 CoMotion MakerSpace 2018
 Edited by: Ramon Qu
 Arduino 101 Basic Workshop
 6 - scrolling LEDs (For Loop)

 Demonstrates the use of a for() loop.
 Lights multiple LEDs in sequence, then in reverse.

 The circuit:
 * LEDs from pins 2 through 7 to ground

This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/ForLoop
 */

int timer = 100;           // The higher the number, the slower the timing.

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int pin = 2; pin < 8; pin++) {
    //The loop will go through [2,8) which is 2 to 7.
    pinMode(pin, OUTPUT); // Set the pin as OUTPUT mode
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int pin = 2; pin < 8; pin++) {
    // turn the pin on:
    digitalWrite(pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(pin, LOW);
  }

  // loop from the highest pin to the lowest:
  for (int pin = 7; pin >= 2; pin--) {
    // turn the pin on:
    digitalWrite(pin, HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(pin, LOW);
  }
}
