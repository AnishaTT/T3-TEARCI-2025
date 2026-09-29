int b1 = 2;
int b2 = 3;
int b3 = 4;
int b4 = 5;
 // variáveis para os estados dos botões

void setup() {
  Serial.begin(9600);

  // Define os pinos dos 4 botões
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  

  pinMode(9, OUTPUT); // saída (ex: LED)
}

void loop() {
  // Lê o estado de cada botão
  b1 = digitalRead(2);
  b2 = digitalRead(3);
  b3 = digitalRead(4);
  b4 = digitalRead(5);

  // Mostra o estado de cada botão no Serial Monitor
  Serial.print("Botão 1: ");
  Serial.println(b1 == HIGH ? "Solto" : "Pressionado");

  Serial.print("Botão 2: ");
  Serial.println(b2 == HIGH ? "Solto" : "Pressionado");

  Serial.print("Botão 3: ");
  Serial.println(b3 == HIGH ? "Solto" : "Pressionado");

  Serial.print("Botão 4: ");
  Serial.println(b4 == HIGH ? "Solto" : "Pressionado");

  Serial.println("--------------------------"); // separador entre leituras

  delay(500);
}
