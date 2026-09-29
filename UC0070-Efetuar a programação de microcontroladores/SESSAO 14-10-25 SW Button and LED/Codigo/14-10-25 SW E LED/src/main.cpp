#include <Arduino.h>
int s = 0;        
int botao = 4;    
int led = 8;      

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT);  
  pinMode(led, OUTPUT);   
}

void loop() 
{
  s = digitalRead(botao);  

  if (s == HIGH) {
    Serial.println("Botão pressionado");
    digitalWrite(led, HIGH);  
  } else {
    Serial.println("Botão solto");
    digitalWrite(led, LOW);  
  }

  delay(1000);  
}