//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>

int main() {

    int vet[6];

    for (int i = 0; i < 6; ++i) {
        printf("Escrava um numeto inteiro: \n");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 6; ++i) {
        printf("O nummeros armazenados no vetor são %d \n", vet[i]);

    }

    return 0;
}