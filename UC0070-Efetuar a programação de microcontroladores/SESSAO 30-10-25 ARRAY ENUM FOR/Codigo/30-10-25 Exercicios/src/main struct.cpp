// #include <Arduino.h>
// typedef struct Botao
// {
//   int estado;
//   int periferico;
//   };
//   Botao b1;

//   typedef struct Rele
//   {
    
//   int estado;
//   int periferico;
//   unsigned long tempo_actual;
//   unsigned long tempo_anterior;
//   };
//   Rele r1;  

//   typedef struct Eletrovalvula
//   {
//   int estado;
//   int periferico;
//   }; 
// Eletrovalvula e1;
 

// void setup() 
// {
//   // inicializar as variaveis de pinos
//  b1.periferico = 2;
// r1.periferico = 3;
// e1.periferico = 4;


// // configurar o periferico
//   pinMode(o, INPUT);// inicia o botao
//   pinMode(rele, OUTPUT);// inicia o rele
//   pinMode(eletrovalvula, OUTPUT);// inicia a valvula

//   Serial.begin(9600); // inicia o monitor serial
// }

// void loop() 
// {
//   int estado = digitalRead(botao);

//   if (estado == LOW) 
//   {
//     Serial.println("Botão pressionado!");
//     digitalWrite(3,HIGH);
//   } else {
//     Serial.println("Botão solto.");
//     digitalWrite(3,LOW);
//   }
// }
//   delay(300);

//   // COMPLETAR O CODIGO PARA CONTROLAR O RELE E A ELETROVALVULA