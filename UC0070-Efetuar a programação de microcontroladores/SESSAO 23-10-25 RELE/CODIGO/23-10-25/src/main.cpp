
#include <Arduino.h>
int s = 0;
int x = 0;
int estadoRele = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  s= digitalRead(2);
  x= digitalRead(3);

  if (s == LOW && estadoRele == 0)
    {
   Serial.println("Ativa");
   digitalWrite(4, HIGH);
   estadoRele = 1;
   delay(300);
  }
  if (x == LOW && estadoRele == 1)
    {
   Serial.println("Desativa");
   digitalWrite(4, LOW);
   estadoRele = 0;
   delay(300);
  }

  }