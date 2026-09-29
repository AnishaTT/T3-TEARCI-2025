#include <Arduino.h>

unsigned long t=0;
unsigned long tempo_anterior=0; 
unsigned long t2 = 0;
unsigned long tempo_anterior2 =0;

int estadoLED= LOW;

void setup() 
{
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
 }

void loop() 
{
t2=millis();
// piscar o LED
 if(t2-tempo_anterior2>500)
  {
  Serial.print("t2-");
  Serial.println(t2);

  Serial.print("tempo_anterior2-");
  Serial.println(tempo_anterior2);
   
estadoLED= !estadoLED;
Serial.print("estadoLED-");
Serial.println(estadoLED);

digitalWrite(LED_BUILTIN,estadoLED);

tempo_anterior2=millis();
}
}