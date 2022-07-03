/*
* Autor: Rafael de Souza Vareiro
* Data da Ultima Atualização: 26 / 06 / 2022
* biblioteca criada para uso proprio e estudo
*/

#include "Arduino.h"
#include "display.h"

display::display(int *pin)
{
  for(int i = 0; i < 7; i++)
  {
     mpin[i] = *pin;
    pin++;
  }
}

void display::print_dp(int num)
{
    for(int i = 0; i < 7; i++)
    {
      digitalWrite(mpin[i], matriz[num][i]);
    }
}

void display::config(int *p)
{
  for(int i = 0; i < 7; i++)
  {
    pinMode(*p, OUTPUT); 
    p++;
  }
}