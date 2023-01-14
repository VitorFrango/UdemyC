//
// Created by Vitor Frango on 14/01/2023.
//

#include <stdio.h>
#include <stdlib.h>

int vetor[10];
int tam = sizeof (vetor) / sizeof (int);
char opcao;

int i;

int main () {

    do {
        printf("Escreva 10 nuemros: \n");

        for (i = 0; i < tam; ++i) {
            scanf("%d", &vetor[i]);

        }

        for (int i = 0; i < tam; ++i) {
            if (vetor[i] < 0) {
                vetor[i] = 0;
                printf("%d\n", vetor[i]);
            } else if (vetor[i] >= 0)
                printf("%d\n", vetor[i]);

        }
        printf("Deseja continuar? (s/n) \n");
        scanf(" %c", &opcao);

    }
    while (opcao == 's' || opcao == 'S');

    }