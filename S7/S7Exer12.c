//
// Created by Vitor Frango on 02/01/2023.
//

#include <stdio.h>

int main(){

    int numero[5];
    int media, soma, maior, menor, i ;

    printf("Escreva 5 numeros:  \n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &numero[i]);

    }

    printf("Os numeros introduzidos foram: \n");
    for (int i = 0; i < 5; ++i) {
        printf("[%d] \n", numero[i]);

    }

    for (int i = 0; i < 5; ++i) {
        soma += numero[i];

    }
    media = soma / 5;
    printf("A media dos numeros é %d \n", media);

    for (int i = 0; i < 5; ++i) {

    }

    maior = numero[0];
    menor = numero[0];
    for (int i = 0; i < 5; ++i) {
        if(numero[i] > maior) {
            maior = numero[i];
            numero[i] = i;
        }
        else if (numero[i] < menor) {
            menor = numero[i];
            numero[i] = i;
        }

    }
    printf("O maior numero é: %d \n", maior);
    printf("O menor numero é: %d \n", menor);

    return 0;
}