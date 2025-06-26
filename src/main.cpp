#include <Arduino.h>

const int ledPin = 35;

void blinkLed() {
  digitalWrite(ledPin, HIGH); // Accendi il LED
  delay(1000);                // Aspetta 1000 ms
  digitalWrite(ledPin, LOW);  // Spegni il LED
  delay(1000);                // Aspetta 1000 ms
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() { blinkLed(); }
