// #include <Arduino.h>

// Enum para identificar cada botão
// typedef enum enum_Botoes
// {
//   CIMA = 0,
//   DIREITA,
//   BAIXO,
//   ESQUERDA
// } enum_Botoes;

// Struct para guardar dados de cada botão
// typedef struct Botao
// {
//   int periferico;
//   int estado;
// } Botao;

// Array de botões
// Botao botoes[4];
// int opcao = 0;

// void setup()
// {



//   Serial.begin(9600);
//   Atribuir pinos
//   botoes[CIMA].periferico = 2;
//   botoes[DIREITA].periferico = 3;
//   botoes[BAIXO].periferico = 4;
//   botoes[ESQUERDA].periferico = 5;

//   Inicializar estado e configurar pinos
//   for (int i = 0; i < 4; i++)
//   {
//     botoes[i].estado = HIGH; // botão não pressionado
//     pinMode(botoes[i].periferico, INPUT); // usa INPUT se tiveres resistores externos pull-up
//   }

//   Serial.println("Sistema iniciado");
// }

// void loop()
// {
//   Ler estado de cada botão
//   for (int i = 0; i < 4; i++)
//   {
//     botoes[i].estado = digitalRead(botoes[i].periferico);
//   }

//   Testar cada combinação
//   if (botoes[CIMA].estado == LOW)
//     opcao = 1;
//   else if (botoes[DIREITA].estado == LOW)
//     opcao = 2;
//   else if (botoes[BAIXO].estado == LOW)
//     opcao = 3;
//   else if (botoes[ESQUERDA].estado == LOW)
//     opcao = 4;
//   else
//     opcao = 0;

//   Mostrar resultado no Serial Monitor
//   switch (opcao)
//   {
//   case 0:
//   Serial.println("Nenhum botão pressionado");
//     break;
//   case 1:
//     Serial.println("Cima");
//     break;
//   case 2:
//     Serial.println("Direita");
//     break;
//   case 3:
//     Serial.println("Baixo");
//     break;
//   case 4:
//     Serial.println("Esquerda");
//     break;
//   }

//   delay(200); // pequeno atraso para evitar múltiplas leituras rápidas

// }
