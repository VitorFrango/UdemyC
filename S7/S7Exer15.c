//
// Created by Vitor Frango on 05/01/2023.
//
#include <stdio.h>


int vector[10];
int igual, icompara;


int main (){

    printf("Escreva 10 numeros: \n ");

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &vector[i]);
    }

    printf("Os numeros introduzidos foram:  \n");
    for (int i = 0; i < 10 ; ++i) {
        printf("%d \n", vector[i]);
    }


    for (int i = 0; i < 10; ++i) {
        for (int icompara = 0; icompara < 10 ; ++icompara) {
            if (vector[i] == vector[icompara]);
                vector[icompara] = '0' ;

            printf("%d \n", vector[i]);

        }

    }

    return 0;
}