//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>

int main() {

    int numeros[3];
    int cont = 3;
    int t = 0;
    int i;

    printf("Escreva 10 numeros\n");
    for (i = 0; i < cont; ++i) {
        scanf("%d", &numeros[i]);

    }


    for ( i = 0; i < cont; ++i) {
    }
    printf("O numeros introduzidos foram: [%d]\n", numeros[i]);

    for ( i = 0; i < cont; ++i) {
        if (numeros[i] % 2 == 0)
            t++;
    }
    printf("Os numeros pares foram [%d] e são os %d", t, numeros[i]);

    return 0;
}