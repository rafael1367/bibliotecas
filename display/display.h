/*
* Autor: Rafael de Souza Vareiro
* Data da Ultima Atualização: 26 / 06 / 2022
* biblioteca criada para uso proprio e estudo
*/

#ifndef display_h
#define display_h

#include "Arduino.h"

class display
{
    private:

    int matriz[10][7] = { // low = 1       high = 0
                          {0,0,0,0,0,0,1}, // numero 0
                          {1,0,0,1,1,1,1}, // numero 1
                          {0,0,1,0,0,1,0}, // numero 2
                          {0,0,0,0,1,1,0}, // numero 3
                          {1,0,0,1,1,0,0}, // numero 4
                          {0,1,0,0,1,0,0}, // numero 5
                          {0,1,0,0,0,0,0}, // numero 6
                          {0,0,0,1,1,1,1}, // numero 7
                          {0,0,0,0,0,0,0}, // numero 8
                          {0,0,0,0,1,0,0}  // numero 9
                      };

    int mpin[7];

    public:
    
    display(int *pin);
    void print_dp(int num);
    void config(int *p);

};

#endif