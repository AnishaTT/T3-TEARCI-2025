#define RELE_VENTOINHA 8

void setup() {
  Serial.begin(9600);

  pinMode(RELE_VENTOINHA, OUTPUT);

  // Relé ativo em LOW -> LOW liga a ventoinha
  digitalWrite(RELE_VENTOINHA, LOW);

  Serial.println("Ventoinha ligada. A monitorizar...");
}

void loop() {
  // Não faz mais nada — só confirma que ainda está a correr
  Serial.println("A correr...");
  delay(2000);
}