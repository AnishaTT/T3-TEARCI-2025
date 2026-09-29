// #include <Arduino.h>

// unsigned long t=0;
// unsigned long tempo_anterior=0; 
// void setup() 
// {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
//  }

// void loop() 
// {
//   // se já passou 2 segundos
//   t= millis();
//   if (t - tempo_anterior > 2000)
//   {
//     //Liga o LED depois de terem passado 10 segundos-> 10000 milissegundos
//     //digitalWrite(LED_BUILTIN, HIGH);
//     Serial.print("-t-");
//     Serial.println(t);

//     Serial.print("tempo_anterior-");
//     Serial.println(tempo_anterior);
    
//     tempo_anterior=millis();

//   }
// }