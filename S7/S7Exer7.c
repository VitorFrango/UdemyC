//
// Created by Vitor Frango on 27/12/2022.
//

#include <stdio.h>

int main (){

    int numeros[10];
    int maior = 0 , i, maiorp, menorp;

    printf(" Escreva 10 numeros inteiros; \n");
    for (int i = 0; i < 10; ++i) {
        printf("Posição [%d]", i);
        scanf("%d", &numeros[i]);


    }
    for (int i = 0; i < 10; ++i) {

        if (i == 0) {
            numeros[i] = maior;
            menorp = i;
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
            maiorp = i;
        }
        printf("Numero introduzido %d, e a sua posição é [%d]: \n", numeros[i], i);

    }
    printf ("O maior numero é   %d  e está na posição [%d] \n", maior, maiorp );


    return 0;
}