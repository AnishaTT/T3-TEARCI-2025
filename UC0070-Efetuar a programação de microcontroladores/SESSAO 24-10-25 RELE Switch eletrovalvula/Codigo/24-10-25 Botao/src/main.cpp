// #include <Arduino.h>
// unsigned long t = 0;
// int botao1 = 0;
// int botaopressionado = 0;
// int tempo_anterior = 0;
// int botao_foi_pressionado = 0;
// int t4 = 0;
// int tempo_anterior_4 = 0;
// int t5=1;
// void setup() {
//   pinMode(botao1, INPUT);//Botao 1
//   Serial.begin(9600); // inicia o monitor serial
// }

// void loop()
// {
//     // leitura do estado do botao
//     botao1 = !digitalRead(2);

//     // se botao for pressionado
//   if (botao1) {

//     botao_foi_pressionado = 1;
//     Serial.println("Botão pressionado! - ");
//     Serial.println(botao_foi_pressionado);
//     tempo_anterior_4 = millis();
//   }

//     if(botaopressionado)
//   {
//      //comecar a contagem 
//     t4 = millis(); 
//     //se maior que 2 segundos
//     if (t4 - tempo_anterior_4 > 2000)
    
//     //ligar led
//     digitalWrite(LED_BUILTIN,HIGH);



//     tempo_anterior_4 = millis();

//     //cancelar o botao_foi_pressionado
//     botao_foi_pressionado= 0;

//     //comecar a contagem do desliga
//     tempo_anterior_5= millis();

//     //dizer que a contagem do desligar tem de acontecer
//     comeca_a_descontar = 1;

//     //se comeca a descontagem
//     if (comeca)
     

//     //Depois de 2 segundos, desliga o led
//      digitalWrite(LED_BUILTIN,LOW);
     
//      if (condition)
//      {}
     
//    // continuar o codigo e corrigir   
//   }
 
// }
