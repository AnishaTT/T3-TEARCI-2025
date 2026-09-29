#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop()
{
   digitalWrite(3, HIGH);
   delay(1000);
   digitalWrite(3, LOW);
   delay(1000);
  }