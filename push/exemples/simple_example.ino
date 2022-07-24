/*
*   Autor: Rafael de Souza Vareiro
*   Data de criação: 24 / 07 / 2022
*   Data da ultima modificação: 24 / 07 / 2022
*   Versão: 1.0.0
*   
*   função: uma biblioteca simples para facilitar o uso do push button
*/

#include "push.h"

#define pin_botao /* escola um pino para o botão */

botao btn(pin_botao);

void setup()
{
    Serial.begin(9600);
}

bool val = false;

void loop()
{
    val = btn.push();
    Serial.println(val);
}


