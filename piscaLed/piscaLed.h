/*
*biblioteca para uso proprio 
*Autor: Rafael de Souza Vareiro
*Data: 02 / 07 / 2022
*um simples pisca led;
*/

#ifndef piscaLed_h
#define piscaLed_h

#include "Arduino.h"

class piscaLed 
{
private:

  int pin;

public:

  piscaLed(int p);
  void piscar(int ms);

};
#endif