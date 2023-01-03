//
// Created by Vitor Frango on 03/01/2023.
//
#include <stdio.h>

int main (){

    int vector[10];
    int iguais;

    printf("Escreva 10 numeros: \n");
    for (int i = 0; i < 10; ++i) {

        scanf("%d", &vector[i]);

    }

    printf("Os numeros introduzidos foram: \n");
    for (int i = 0; i < 10; ++i) {
        printf("%d \n", vector[i]);

    }

    return 0;
}