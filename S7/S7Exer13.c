//
// Created by Vitor Frango on 03/01/2023.
//
#include <stdio.h>

int main (){


    int valor[5];
    int maior, menor, maiorp, menorp;

    printf("Escreva 5 numeros: \n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &valor[i]);


    }

    printf("Os valores introduzidos são: \n");
    for (int i = 0; i < 5; ++i) {
        printf("%d \n" , valor[i]);
    }

    maior = valor[0];
    menor = valor[0];
    for (int i = 0; i < 5; ++i) {
        if (valor[i] > maior){
            maior = valor[i];
            maiorp = i;
        }
        else if (valor[i] < menor){
            menor = valor[i];
            menorp = i;
        }

    }
    printf("O maior numero digitado é [%d]  e esta na posição %d \n", maior, maiorp);
    printf("O menor numero digitado é [%d] \n", menor, menorp);




    return 0;
}