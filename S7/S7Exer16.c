//
// Created by Vitor Frango on 14/01/2023.
//
#include <stdio.h>

float vetor[5];
int tam = sizeof(vetor) / sizeof(int);
int codigo, i ;
char opcao;


int main(){

    do {
        printf("Escreva 5 numeros reais: \n");
        for (i = 0; i < tam; ++i) {
            scanf("%f", &vetor[i]);

        }

        printf("Escreva um vqlor entre 0 e 2: \n");
        scanf("%d", &codigo);

        if (codigo == 0) {
            return 0;
        } else if (codigo == 1) {
            for (i = 0; i < tam; ++i) {
                printf("%.1f \n", vetor[i]);
            }
        } else if (codigo == 2) {
            for (i = tam - 1; i >= 0; --i) {
                printf("%.1f \n", vetor[i]);
            }
        }


        printf("Deseja continuar? (s/n) : \n");
        scanf(" %c", &opcao);
    }
    while (opcao == 's' || opcao == 'S');
}