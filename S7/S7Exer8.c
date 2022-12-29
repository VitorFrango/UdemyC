//
// Created by Vitor Frango on 29/12/2022.
//
#include <stdio.h>

int main () {

    int numero[6];


    printf("Escreva 6 numeros inteiros: \n");
    for (int i = 0; i < 6; ++i) {
        printf("Posição [%d] -> ",i);
        scanf("%d", &numero[i]);

    }

    for (int i = 6; i >= 0; --i) {
        printf("Os numeros introduzidos foram %d, \n", numero[i]);

    }



    return 0;
}