// Blink LED Example
// Author: IoT Club 2025

int ledPin = 13; // built-in LED pin on Arduino Uno

void setup() {
  pinMode(ledPin, OUTPUT); // set pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn LED on
  delay(1000);                // wait 1 second
  digitalWrite(ledPin, LOW);  // turn LED off
  delay(1000);                // wait 1 second
}
