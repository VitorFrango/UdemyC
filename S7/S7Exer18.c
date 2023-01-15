//
// Created by Vitor Frango on 14/01/2023.
//

#include <stdio.h>

int vetor[3], vetor2[3];
int tam = sizeof (vetor) / sizeof (int);
char opcao;
int x,i, j;
int conta = 0;

int main(){

    do {

        printf("Escreva 10 nuemros: \n");
        for (i = 0; i < tam; ++i) {
            scanf("%d", &vetor[i]);

        }

        printf("Escreva um numero: ");
        scanf("%d", &x);

        vetor[i]=vetor2[j];
        for (j = 0; j < tam; ++j) {
            if ((vetor2[j]%x) == 0){
                conta++;
            }

        }
        printf(" %d  \n", vetor[i]);
        printf("Encontrei [%d] numeros multiplos e são os [%d ] \n ", conta, vetor2[j]);
        fflush(stdin);

        printf("Deseja continuar? (s/n) \n");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}