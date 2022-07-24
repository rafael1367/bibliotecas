/*
*   Autor: Rafael de Souza Vareiro
*   Data: 24 / 07 / 2022
*   
*   função: uma biblioteca simples para facilitar o uso do push button
*/

#include "Arduino.h"
#include "push.h"

botao::botao(int pin_botao)
{
    pinMode(pin_botao, INPUT);
    pin_uso = pin_botao;
}

bool botao::push()
{ 
  if(digitalRead(pin_uso) == HIGH)
  {
   	apertado = 1;
    solto = 0;
  }
  
  else
  {
    solto = 1;
  }
  
  if(apertado == 1 && solto == 1)
  {
   	apertado = 0;
    solto = 0;
    val = !val;
  }

  if(val == !val)
  {
    return val;
  }
}