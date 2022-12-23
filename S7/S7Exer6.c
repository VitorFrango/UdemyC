//
// Created by Vitor Frango on 23/12/2022.
//
#include <stdio.h>

int main(){

    int numero[10];

    for (int i = 0; i < 3; ++i) {

        printf("Escreva 10 numeros inteiros: \n");
        scanf("%d", &numero[i]);

        }

    for (int i = 0; i < 3; ++i) {
        printf("Posição [%d]: [%d] \n",i, numero[i]);

    }

    return 0;
}