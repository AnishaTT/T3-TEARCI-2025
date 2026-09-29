#include <Arduino.h>

typedef enum eBotoes
{
CIMA = 0,
DIREITA,
BAIXO,
ESQUERDA,
TOTAL //usado para definir o total de elementos do enum
};


typedef struct Botao
{
  int estado;
  int periferico;
  };
  Botao b1;
Botao botoes [4]; //array de 4 botoes
  typedef struct Rele
  {
    
  int estado;
  int periferico;
  unsigned long tempo_actual;
  unsigned long tempo_anterior;
  };
  Rele r1;  
  Rele r2;  
  Rele r3;  
  Rele r4;  

    //ARRAY- Foi usado para gerir os MULTIPLOS RELES e compactar o codigo
  Rele reles[4]; //array de 4 reles


  typedef struct Eletrovalvula
  {
  int estado;
  int periferico;
  }; 
Eletrovalvula e1;
Eletrovalvula e2;
Eletrovalvula e3;
Eletrovalvula e4;

 

void setup() 
{
  // inicializar os reles de pinos
 reles[0].periferico = 2;
 reles[1].periferico = 3;
 reles[2].periferico = 4;
 reles[3].periferico = 5;

    // inicializar os botoes de pinos--- type enum usado para identificar os botoes
    botoes[CIMA].periferico = 6;
    botoes[DIREITA].periferico = 7;
    botoes[BAIXO].periferico = 8;
    botoes[ESQUERDA].periferico = 9;


//configurar o periferico
//botoes 
  {
    pinMode(botoes[0].periferico, INPUT);// inicia os botoes
    pinMode(botoes[1].periferico, INPUT);// inicia os botoes
    pinMode(botoes[2].periferico, INPUT);// inicia os botoes 
    pinMode(botoes[3].periferico, INPUT);// inicia os botoes

  // ciclos em while para configurar os botoes

    int index = 0; // variavel inicializada
    while (index < 4) //condicao da variavel- enquanto index for menor que 4(condicao for verdadeira)
    {
      pinMode(botoes[index].periferico, INPUT); //operacao a ser realizada
      index += 1; //mudanca do valor da variavel (novo teste)
    //index= index +1;
    //index++;
    }

    // ciclos em for para configurar os reles- "mais compacto"
    for (int i = 0; i < 4; i+=1) 
    {
      pinMode(reles[i].periferico, INPUT); //operacao a ser realizada
    }
    
    //reles
    pinMode(reles[0].periferico, INPUT);// inicia os botoes
    pinMode(reles[1].periferico, INPUT);// inicia os botoes
    pinMode(reles[2].periferico, INPUT);// inicia os botoes 
    pinMode(reles[3].periferico, INPUT);// inicia os botoes
    
    
    
    
    
    
    
    
    // eletrovalvula
    
    pinMode(e1,periferico, OUTPUT);
    pinMode(e2 ,periferico, OUTPUT);
    pinMode(e3 ,periferico, OUTPUT);
    pinMode(e4 ,periferico, OUTPUT);
    
  }

  Serial.begin(9600); // inicia o monitor serial

}
void loop()