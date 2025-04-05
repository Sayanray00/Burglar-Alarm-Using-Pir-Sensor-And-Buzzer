#include <Wire.h>
#include <Adafruit_LEDBackpack.h>
// Define pin numbers
const int pirPin = 2; // PIR sensor connected to digital pin 2
const int buzzerPin = 3; // Buzzer connected to digital pin 3
const int ledPin = 4; // Optional LED connected to digital pin 4
void setup() {
// Initialize pins
pinMode(pirPin, INPUT);
pinMode(buzzerPin, OUTPUT);
pinMode(ledPin, OUTPUT);
}
void loop() {
// Read PIR sensor state
int pirState = digitalRead(pirPin);
if (pirState == HIGH) {
// Motion detected, activate the buzzer and LED
digitalWrite(buzzerPin, HIGH);
digitalWrite(ledPin, HIGH);
delay(1000); // Buzzer sounds for 1 second
digitalWrite(buzzerPin, LOW);
digitalWrite(ledPin, LOW);
}
}
