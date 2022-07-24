/*
*   Autor: Rafael de Souza Vareiro
*   Data: 24 / 07 / 2022
*   
*   função: uma biblioteca simples para facilitar o uso do push button
*/

#ifndef push_h
#define push_h

#include "Arduino.h"

class botao
{
    private:
        int apertado = 0;
        int solto = 0;
        bool val = false;
        int pin_uso;
    public:

        botao(int pin_botao);
        bool push();
};


#endif