#include <Arduino.h>

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(39, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(39, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(39, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}