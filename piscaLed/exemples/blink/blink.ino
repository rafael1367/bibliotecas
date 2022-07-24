/*
*biblioteca para uso proprio 
*Autor: Rafael de Souza Vareiro
*Data: 02 / 07 / 2022
*um simples pisca led;
*/

#include "piscaLed.h"

#define led1 8

piscaLed led(led1);

void setup()
{

}

void loop()
{
  led.piscar(500);
}