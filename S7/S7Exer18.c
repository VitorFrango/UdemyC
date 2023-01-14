//
// Created by Vitor Frango on 14/01/2023.
//

#include <stdio.h>

int vetor[3], vetor2[3];
int tam = sizeof (vetor) / sizeof (int);
char opcao;
int x, conta;

int main(){

    do {

        printf("Escreva 10 nuemros: \n");

        for (int i = 0; i < tam; ++i) {
            scanf("%d", &vetor[i]);

        }

        for (int i = 0; i < tam; ++i) {
            printf("%d \n", vetor[i]);

        }

        printf("Escreva um numero: ");
        scanf("%d", &x);

        for (int i = 0; i < tam ; ++i) {

        }

        printf("Deseja continuar? (s/n) \n");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}