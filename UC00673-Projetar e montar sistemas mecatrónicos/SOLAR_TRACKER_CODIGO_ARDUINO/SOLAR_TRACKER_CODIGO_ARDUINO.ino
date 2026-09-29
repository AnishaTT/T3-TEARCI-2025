#include <Wire.h>
#include "RTClib.h"
#include <Servo.h>
#include <LiquidCrystal.h>
#include <EEPROM.h>

// =====================================================
// OBJETOS
// =====================================================

RTC_DS3231 relogio;
LiquidCrystal display(12, 11, 10, 9, 8, 7);

Servo motorAzimute;
Servo motorTilt;

// =====================================================
// PINOS
// =====================================================

constexpr int PINO_AZIMUTE = 5;
constexpr int PINO_TILT    = 6;

constexpr int LDR_ESQ = A0;
constexpr int LDR_DIR = A1;

// =====================================================
// EEPROM
// =====================================================

constexpr int ADDR_AZ   = 0;
constexpr int ADDR_TILT = 1;

// =====================================================
// CONFIG LDR
// =====================================================

constexpr int LDR_NIGHT_MAX = 300;
constexpr int LDR_DAY_MIN   = 600;
constexpr int LDR_DIFF_TH   = 60;

// =====================================================
// ESTADO
// =====================================================

int posAz = 90;
int posTilt = 0;

int alvoAz = 90;
int alvoTilt = 0;

unsigned long tAz = 0;
unsigned long tTilt = 0;

int minAnt = -1;

// =====================================================
// TABELA SOLAR
// =====================================================

struct PosicaoSolar {
  uint8_t h, m;
  float az, el;
};

const PosicaoSolar tabela[] = {
  {7,0,86.7,11.4},{8,0,96.7,22.6},{9,0,108,33.6},
  {10,0,121.8,43.8},{11,0,139.9,52.3},{12,0,164.1,57.6},
  {13,0,192.1,58.0},{14,0,217.1,53.3},{15,0,236.1,45.1},
  {16,0,250.3,35.1},{17,0,261.9,24.2},{18,0,272,13.0},
  {19,0,281.9,1.9}
};

constexpr int N = sizeof(tabela) / sizeof(tabela[0]);

// =====================================================
// INTERPOLAÇÃO
// =====================================================

float interp(float x,float x0,float x1,float y0,float y1){
  return y0 + (y1 - y0) * (x - x0) / (x1 - x0);
}

// =====================================================
// MOVIMENTO SUAVE
// =====================================================

void moverServoNB(Servo &s,int alvo,int &atual,unsigned long &t){

  if(abs(atual - alvo) <= 1){
    atual = alvo;
    s.write(atual);
    return;
  }

  if(millis() - t < 15) return;

  t = millis();

  atual += (alvo > atual) ? 1 : -1;

  atual = constrain(atual, 0, 180);

  s.write(atual);
}

// =====================================================
// LDR FILTRADO
// =====================================================

int lerLDRMedia(){

  long soma = 0;

  for(int i=0;i<5;i++){
    soma += (analogRead(LDR_ESQ) + analogRead(LDR_DIR)) / 2;
    delay(5);
  }

  return soma / 5;
}

// =====================================================
// ESTADO LUZ
// =====================================================

String estadoLuz(int media, int diff){

  if(media < LDR_NIGHT_MAX) return "NIGHT";

  if(media > LDR_DAY_MIN) return "DAY";

  if(abs(diff) < LDR_DIFF_TH) return "CLOUD";

  return "DAY";
}

// =====================================================
// CALC SOLAR
// =====================================================

bool calcSolar(int h,int m,float &az,float &el){

  int t = h * 60 + m;

  for(int i=0;i<N-1;i++){

    int tA = tabela[i].h * 60 + tabela[i].m;
    int tB = tabela[i+1].h * 60 + tabela[i+1].m;

    if(t >= tA && t < tB){

      az = interp(t,tA,tB,tabela[i].az,tabela[i+1].az);
      el = interp(t,tA,tB,tabela[i].el,tabela[i+1].el);

      return true;
    }
  }

  return false;
}

// =====================================================
// DISPLAY
// =====================================================

void atualizarDisplay(int h,int m,String estado){

  display.setCursor(0,0);
  display.print("                ");
  display.setCursor(0,0);

  if(h < 10) display.print("0");
  display.print(h);
  display.print(":");

  if(m < 10) display.print("0");
  display.print(m);

  display.print(" ");
  display.print(estado);

  display.setCursor(0,1);
  display.print("                ");
  display.setCursor(0,1);

  display.print("AZ:");
  display.print(posAz);

  display.print(" T:");
  display.print(posTilt);
}

// =====================================================
// SETUP
// =====================================================

void setup(){

  Serial.begin(9600);

  display.begin(16,2);
  display.print("Solar Tracker");

  Wire.begin();
  relogio.begin();

  motorAzimute.attach(PINO_AZIMUTE);
  motorTilt.attach(PINO_TILT);

  // LER EEPROM
  posAz   = EEPROM.read(ADDR_AZ);
  posTilt = EEPROM.read(ADDR_TILT);

  if(posAz < 0 || posAz > 180) posAz = 90;
  if(posTilt < 0 || posTilt > 90) posTilt = 0;

  alvoAz = posAz;
  alvoTilt = posTilt;

  motorAzimute.write(posAz);
  motorTilt.write(posTilt);

  delay(1000);
  display.clear();

  Serial.println("Sistema iniciado");
}

// =====================================================
// LOOP
// =====================================================

void loop(){

  DateTime agora = relogio.now();

  int h = agora.hour();
  int m = agora.minute();

  int minPar = m - (m % 2);

  float az = 0;
  float el = 0;

  int media = lerLDRMedia();
  int diff  = analogRead(LDR_ESQ) - analogRead(LDR_DIR);

  String estado = estadoLuz(media, diff);

  // Atualiza posição solar a cada 2 min
  if(minPar != minAnt){

    minAnt = minPar;

    if(calcSolar(h,minPar,az,el)){

      alvoAz   = (int)(interp(az,60,300,0,180)+0.5);
      alvoTilt = (int)(interp(el,1.93,58.04,0,90)+0.5);

      alvoAz   = constrain(alvoAz,0,180);
      alvoTilt = constrain(alvoTilt,0,90);
    }
  }

  moverServoNB(motorAzimute, alvoAz, posAz, tAz);
  moverServoNB(motorTilt, alvoTilt, posTilt, tTilt);

  atualizarDisplay(h,m,estado);

  Serial.print("Estado: ");
  Serial.print(estado);
  Serial.print(" | MEDIA:");
  Serial.print(media);
  Serial.print(" | DIFF:");
  Serial.print(diff);
  Serial.print(" | AZ:");
  Serial.print(posAz);
  Serial.print(" T:");
  Serial.println(posTilt);

  // SALVAR EEPROM SOMENTE SE MUDAR
  static int ultAz = -1;
  static int ultTilt = -1;

  if(posAz != ultAz){
    EEPROM.update(ADDR_AZ, posAz);
    ultAz = posAz;
  }

  if(posTilt != ultTilt){
    EEPROM.update(ADDR_TILT, posTilt);
    ultTilt = posTilt;
  }

  delay(100);
}