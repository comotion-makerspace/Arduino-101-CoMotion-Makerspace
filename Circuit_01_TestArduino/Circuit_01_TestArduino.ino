/*
 CoMotion MakerSpace 2018
 Edited by: Ramon Qu
 Arduino 101 Basic Workshop
 Example sketch 01 -- BLINKING A LED without a breadboard

 Turn an LED on for one second, off for one second,
 and repeat forever.

 */
//Define an constant integer ledPin as the control pin number for LED
const int ledPin = 13;

//This function will only run once
void setup()
{
  //Set ledPin (PIN 13) as an OUTPUT pin, which power the LED with 5v (Arduino UNO)
  pinMode(ledPin, OUTPUT);
}

//This function will run repeatedly after running setup.
void loop()
{
  digitalWrite(ledPin, HIGH);   // Turn on the LED
  delay(1000);              // Wait for one second (1000 ms)
  digitalWrite(ledPin, LOW);    // Turn off the LED
  delay(1000);              // Wait for one second (1000 ms)
}

/*
 / Try changing the 1000 in the above delay() functions to
 / different numbers and see how it affects the timing. Smaller
 / values will make LED blink faster.
 /
 / Other challenges:
 /   * Decrease the delay to 10 ms. Can you still see it blink?
 /         Find the smallest delay that you can still see a blink. What is this frequency?
 /   * Modify the code above to resemble a SOS morse code
 */
