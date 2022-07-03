/*
* Autor: Rafael de Souza Vareiro
* Data da Ultima Atualização: 26 / 06 / 2022
* biblioteca criada para uso proprio e estudo
*/

//inclui a biblioteca
#include <display.h>

//defini os pinos do display na ordem (a,b,c,d,e,f,g)
int pin_dp[7] = {13,12,11,10,9,8,7};


int num = 0;

//cria um objeto para uso
display dp(pin_dp);

void setup()
{
  //configura os pinos do display como saida 
  dp.config(pin_dp);

  
  pinMode(6, INPUT);
}

void loop()
{
  int bot = digitalRead(6); 
  if(bot == HIGH)
  {
      num++;
      delay(300);
  }

  //imprime no display
  dp.print_dp(num);

  if(num > 9)
  {
    num = 0;
  }
}
