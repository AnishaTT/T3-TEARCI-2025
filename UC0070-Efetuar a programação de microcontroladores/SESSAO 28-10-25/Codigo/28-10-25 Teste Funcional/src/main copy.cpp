#include <Arduino.h>
// VERSAO FUNCIONAL 
// Botões
int botaoCima = 7;
int botaoBaixo = 8;
int botaoDireita = 9;
int botaoEsquerda = 10;

// LEDs
int ledCima = 2;
int ledBaixo = 3;
int ledDireita = 4;
int ledEsquerda = 5;

int opcao = 0;
int ultimaOpcao = -1; // Para evitar repetições no Serial

// --- Declarações das funções (necessárias antes do setup) ---
void apagarLeds();
void mostrarLeds(int direcao);

void setup() {
  Serial.begin(9600);

  // Botões com resistores internos
  pinMode(botaoCima, INPUT_PULLUP);
  pinMode(botaoBaixo, INPUT_PULLUP);
  pinMode(botaoDireita, INPUT_PULLUP);
  pinMode(botaoEsquerda, INPUT_PULLUP);

  // LEDs como saída
  pinMode(ledCima, OUTPUT);
  pinMode(ledBaixo, OUTPUT);
  pinMode(ledDireita, OUTPUT);
  pinMode(ledEsquerda, OUTPUT);

  // Apaga todos os LEDs no início
  apagarLeds();
}

void loop() {
  bool cima = digitalRead(botaoCima) == LOW;
  bool baixo = digitalRead(botaoBaixo) == LOW;
  bool direita = digitalRead(botaoDireita) == LOW;
  bool esquerda = digitalRead(botaoEsquerda) == LOW;

  if (cima && direita) opcao = 5;
  else if (cima && esquerda) opcao = 6;
  else if (baixo && direita) opcao = 7;
  else if (baixo && esquerda) opcao = 8;
  else if (cima) opcao = 1;
  else if (baixo) opcao = 2;
  else if (direita) opcao = 3;
  else if (esquerda) opcao = 4;
  else opcao = 0;

  mostrarLeds(opcao);

  // Só imprime quando muda a direção
  if (opcao != ultimaOpcao) {
    ultimaOpcao = opcao;

    switch(opcao) {
      case 1: Serial.println("cima"); break;
      case 2: Serial.println("baixo"); break;
      case 3: Serial.println("direita"); break;
      case 4: Serial.println("esquerda"); break;
      case 5: Serial.println("diagonal cima direita"); break;
      case 6: Serial.println("diagonal cima esquerda"); break;
      case 7: Serial.println("diagonal baixo direita"); break;
      case 8: Serial.println("diagonal baixo esquerda"); break;
      default: Serial.println("parado"); break;
    }
  }

  delay(50);
}

// --- Função para desligar todos os LEDs ---
void apagarLeds() {
  digitalWrite(ledCima, LOW);
  digitalWrite(ledBaixo, LOW);
  digitalWrite(ledDireita, LOW);
  digitalWrite(ledEsquerda, LOW);
}

// --- Função para acender LEDs conforme direção ---
void mostrarLeds(int direcao) {
  apagarLeds();

  switch (direcao) {
    case 1: digitalWrite(ledCima, HIGH); break;
    case 2: digitalWrite(ledBaixo, HIGH); break;
    case 3: digitalWrite(ledDireita, HIGH); break;
    case 4: digitalWrite(ledEsquerda, HIGH); break;
    case 5: // cima + direita
      digitalWrite(ledCima, HIGH);
      digitalWrite(ledDireita, HIGH);
      break;
    case 6: // cima + esquerda
      digitalWrite(ledCima, HIGH);
      digitalWrite(ledEsquerda, HIGH);
      break;
    case 7: // baixo + direita
      digitalWrite(ledBaixo, HIGH);
      digitalWrite(ledDireita, HIGH);
      break;
    case 8: // baixo + esquerda
      digitalWrite(ledBaixo, HIGH);
      digitalWrite(ledEsquerda, HIGH);
      break;
  }
}