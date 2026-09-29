#include <Arduino.h>
// Struck - 4 Botões 
typedef struct Botao
{
  int periferico;
  int estado;
};

Botao b1;
Botao b2;
Botao b3;
Botao b4;

int opcao = 0;

void setup() {
  // Inicializar
  b1.periferico = 2;
  b2.periferico = 3;
  b3.periferico = 4;
  b4.periferico = 5;

  b1.estado = LOW;
  b2.estado = LOW;
  b3.estado = LOW;
  b4.estado = LOW;

  // configurar:
  Serial.begin(9600); 
  pinMode(b1.periferico, INPUT);
  pinMode(b2.periferico, INPUT);
  pinMode(b3.periferico, INPUT);
  pinMode(b4.periferico, INPUT);
}

void loop() {

  // testar se os 4 botões não estão pressionados
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH) {
    opcao = 0;
  }

  // testar se o botão 1 está a ser pressionado 
  if (digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH) {
    opcao = 1;
  }

  // testar se o botão 2 está a ser pressionado 
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH) {
    opcao = 2;
  }

  // testar se o botão 3 está a ser pressionado 
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == HIGH) {
    opcao = 3;
  }

  // testar se o botão 4 está a ser pressionado 
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == LOW) {
    opcao = 4;
  }

  // testar se o botão 1 e 2 estão a ser pressionados 
  if (digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == HIGH) {
    opcao = 5;
  }

  // testar se o botão 1 e 3 estão a ser pressionados 
  if (digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == HIGH) {
    opcao = 6;
  }

  // testar se o botão 2 e 4 estão a ser pressionados 
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == HIGH && digitalRead(b4.periferico) == LOW) {
    opcao = 7;
  }

  // testar se o botão 3 e 4 estão a ser pressionados 
  if (digitalRead(b1.periferico) == HIGH && digitalRead(b2.periferico) == HIGH && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == LOW) {
    opcao = 8;
  }

  // testar se todos os botões estão a ser pressionados 
  if (digitalRead(b1.periferico) == LOW && digitalRead(b2.periferico) == LOW && digitalRead(b3.periferico) == LOW && digitalRead(b4.periferico) == LOW) {
    opcao = 9;
  }

  // Mostrar resultado no Serial Monitor
  switch (opcao) {
    case 0:
      Serial.println("Faz nada");
      break;

    case 1:
      Serial.println("Botão 1 pressionado");
      break;

    case 2:
      Serial.println("Botão 2 pressionado");
      break;

    case 3:
      Serial.println("Botão 3 pressionado");
      break;

    case 4:
      Serial.println("Botão 4 pressionado");
      break;

    case 5:
      Serial.println("Botões 1 e 2 pressionados");
      break;

    case 6:
      Serial.println("Botões 1 e 3 pressionados");
      break;

    case 7:
      Serial.println("Botões 2 e 4 pressionados");
      break;

    case 8:
      Serial.println("Botões 3 e 4 pressionados");
      break;

    case 9:
      Serial.println("Todos os botões pressionados");
      break;

    default:
      Serial.println("Erro");
      break;
  }
}
