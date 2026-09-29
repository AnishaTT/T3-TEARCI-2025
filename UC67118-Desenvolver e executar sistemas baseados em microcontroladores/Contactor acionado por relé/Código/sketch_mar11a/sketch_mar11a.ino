int rele = 5;
int botaoStart = 3;
int botaoEmergencia = 4;

void setup() {

  Serial.begin(9600);

  pinMode(rele, OUTPUT);

  pinMode(botaoStart, INPUT_PULLUP);
  pinMode(botaoEmergencia, INPUT_PULLUP);

  digitalWrite(rele, LOW);

  Serial.println("Sistema iniciado");
}

void loop() {

  int start = digitalRead(botaoStart);
  int emergencia = digitalRead(botaoEmergencia);

  if (start == LOW) {
    digitalWrite(rele, HIGH);
    Serial.println("START pressionado - Contactor ligado");
    delay(300);
  }

  if (emergencia == HIGH) {
    digitalWrite(rele, LOW);
    Serial.println("EMERGENCIA pressionada - Contactor desligado");
    delay(300);
  }

}