//
// Created by Vitor Frango on 03/01/2023.
//
#include <stdio.h>

int main (){


    int valor[5];
    int maior, menor;

    printf("Escreva 5 numeros: \n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &valor[i]);


    }

    printf("Os valores introduzidos são: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%d \n" , valor[i]);
    }


    return 0;
}