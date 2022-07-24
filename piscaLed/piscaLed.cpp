/*
*biblioteca para uso proprio 
*Autor: Rafael de Souza Vareiro
*Data: 02 / 07 / 2022
*um simples pisca led;
*/

#include "Arduino.h"
#include "piscaLed"

piscaLed::piscaLed(int p)
{
  pinMode(p, OUTPUT);
  pin = p;
}

void piscaLed::piscar(int ms)
{
  digitalWrite(pin, HIGH);
  delay(ms);
  digitalWrite(pin, LOW);
  delay(ms);
}