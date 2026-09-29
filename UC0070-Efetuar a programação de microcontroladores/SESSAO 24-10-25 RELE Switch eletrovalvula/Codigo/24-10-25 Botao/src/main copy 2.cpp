#include <Arduino.h>
 unsigned long t = 0;
 unsigned long tempo_anterior=0;
 int Botao = LOW;
 int Botao_pressionado = HIGH;
int estadoLED = LOW;
unsigned long t2 = 0;
unsigned long tempo_anterior2 = 0;
int comeca_a_descontar = 0;
void setup()
{
Serial.begin(9600);
pinMode(2,INPUT);
pinMode(LED_BUILTIN,OUTPUT);

}
void loop()
{
//Leitura do botao
Botao =!digitalRead(2);

// // // SE O BOTAO FOR PRESSIONADO
if (Botao)
{
 //Botãopressionado
Botao_pressionado = HIGH;
Serial.println("Botao pressionado-");
Serial.println(Botao_pressionado);

// //   // COMECAR A CONTAGEM
tempo_anterior =millis();
}
// // // Se botao foi pressionado
if (Botao_pressionado)
{
// Comeca a contagem
 t=millis();

 // Se for maior que 2 segundos
if(t-tempo_anterior>2000)
{
// ligar o LED
digitalWrite(LED_BUILTIN,HIGH);
Serial.println("ligado");
 
//desliga o botão
Botao_pressionado = LOW;
 
// //  //Começar a contagem para desligar

tempo_anterior2= millis();
 
//  contagem do desliga tem que acontecer
comeca_a_descontar = 1;
}
// Inicio da descontagem
if(comeca_a_descontar)
{
//contagem para desligar
t2=millis();
// // // caso tenham passado 2s
if (t2-tempo_anterior2> 2000)
 {
// //   // desligar
digitalWrite(LED_BUILTIN,LOW);
Serial.println("desligado");
comeca_a_descontar= 0;
}
}

}
}
