//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>

int main() {

    int numeros[3];
    int cont = 3;
    int t = 0;

    for (int i = 0; i < cont; ++i) {
        printf("Escreva 10 numeros\n");
        scanf("%d", &numeros[i]);

    }

    for (int i = 0; i < cont; ++i) {
        printf("O numeros introduzidos foram: [%d]\n", numeros[i]);

    }

    for (int i = 0; i < cont; ++i) {
        if (numeros[i] % 2 == 0)
            t++;

        printf("Escreveu %d numero par e é o numero [%d]: \n", t, numeros[i]);
    }


    return 0;
}