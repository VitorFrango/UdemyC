//
// Created by Vitor Frango on 22/12/2022.
//
#include<stdio.h>
#include <stdlib.h>


int main() {

// vetores de inteiros
    int numeros[2][2];

    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Numeros na posição [%d] [%d] vale %d \n", i, j, numeros[i][j]);

        }

    }

// vetores de reais
    float valores[2][2];


    valores[0][0] = rand();
    valores[0][1] = rand();
    valores[1][0] = rand();
    valores[1][1] = rand();

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {

            printf("Numeros na posição [%d [%d] vale %.2f \n", i, j, valores[i][j]);

        }

    }


    return 0;
}