//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>

int main() {

    int vet[3];
    int xy[2];
    int soma;

    for (int i = 0; i < 3; ++i) {
        printf("Escreva 3 valores: \n");
        scanf("%d", &vet[i]);


    }
    for (int i = 0; i < 3; ++i) {
        printf("Os valores introduzidos são: %d\n", vet[i]);
    }

    for (int i = 0; i < 2; ++i) {
        printf("Escreva agora 2 dos valores introduzidos: \n");
        scanf("%d", &xy[i]);

    }
    for (int i = 0; i < 2; ++i) {
        printf("Os numeros selecionados foram: %d\n", xy[i]);


    }
    printf("A sua soma é: %d\n", xy[0] + xy[1]);


    return 0;
}