// #include <Arduino.h>
// // Struck + Arrays - 4 Botões
// typedef struct Botao
// {
//   int estado;
//   int periferico;
// };

// Botao Botoes[4];
// int opcao = 0;

// void setup()
// {
//   Serial.begin(9600);

//   // definir pinos 
//   Botoes[0].periferico = 2;
//   Botoes[0].estado = HIGH;
//   pinMode(Botoes[0].periferico, INPUT);

//   Botoes[1].periferico = 3;
//   Botoes[1].estado = HIGH;
//   pinMode(Botoes[1].periferico, INPUT);

//   Botoes[2].periferico = 4;
//   Botoes[2].estado = HIGH;
//   pinMode(Botoes[2].periferico, INPUT);

//   Botoes[3].periferico = 5;
//   Botoes[3].estado = HIGH;
//   pinMode(Botoes[3].periferico, INPUT);
// }

// void loop()
// {
//   // ler estados dos botões
//   Botoes[0].estado = digitalRead(Botoes[0].periferico);
//   Botoes[1].estado = digitalRead(Botoes[1].periferico);
//   Botoes[2].estado = digitalRead(Botoes[2].periferico);
//   Botoes[3].estado = digitalRead(Botoes[3].periferico);

//   // Nenhum botão pressionado
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == HIGH && Botoes[2].estado == HIGH && Botoes[3].estado == HIGH)
//   {
//     opcao = 0;
//   }

//   // Botão 1 (Cima)
//   if (Botoes[0].estado == LOW && Botoes[1].estado == HIGH && Botoes[2].estado == HIGH && Botoes[3].estado == HIGH)
//   {
//     opcao = 1;
//   }

//   // Botão 2 (Esquerda)
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == LOW && Botoes[2].estado == HIGH && Botoes[3].estado == HIGH)
//   {
//     opcao = 2;
//   }

//   // Botão 3 (Direita)
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == HIGH && Botoes[2].estado == LOW && Botoes[3].estado == HIGH)
//   {
//     opcao = 3;
//   }

//   // Botão 4 (Baixo)
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == HIGH && Botoes[2].estado == HIGH && Botoes[3].estado == LOW)
//   {
//     opcao = 4;
//   }

//   // Superior Esquerdo (1 + 2)
//   if (Botoes[0].estado == LOW && Botoes[1].estado == LOW && Botoes[2].estado == HIGH && Botoes[3].estado == HIGH)
//   {
//     opcao = 5;
//   }

//   // Superior Direito (1 + 3)
//   if (Botoes[0].estado == LOW && Botoes[1].estado == HIGH && Botoes[2].estado == LOW && Botoes[3].estado == HIGH)
//   {
//     opcao = 6;
//   }

//   // Inferior Esquerdo (2 + 4)
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == LOW && Botoes[2].estado == HIGH && Botoes[3].estado == LOW)
//   {
//     opcao = 7;
//   }

//   // Inferior Direito (3 + 4)
//   if (Botoes[0].estado == HIGH && Botoes[1].estado == HIGH && Botoes[2].estado == LOW && Botoes[3].estado == LOW)
//   {
//     opcao = 8;
//   }

//   // Todos os botões
//   if (Botoes[0].estado == LOW && Botoes[1].estado == LOW && Botoes[2].estado == LOW && Botoes[3].estado == LOW)
//   {
//     opcao = 9;
//   }

//   // Mostrar resultado no Serial Monitor
//   switch (opcao)
//   {
//   case 0:
//     Serial.println("Faz nada");
//     break;
//   case 1:
//     Serial.println("Cima");
//     break;
//   case 2:
//     Serial.println("Esquerda");
//     break;
//   case 3:
//     Serial.println("Direita");
//     break;
//   case 4:
//     Serial.println("Baixo");
//     break;
//   case 5:
//     Serial.println("Superior Esquerdo");
//     break;
//   case 6:
//     Serial.println("Superior Direito");
//     break;
//   case 7:
//     Serial.println("Inferior Esquerdo");
//     break;
//   case 8:
//     Serial.println("Inferior Direito");
//     break;
//   case 9:
//     Serial.println("Todos os botões");
//     break;
//   default:
//     Serial.println("Erro");
//     break;
//   }
// }