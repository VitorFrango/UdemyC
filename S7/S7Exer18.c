//
// Created by Vitor Frango on 14/01/2023.
//

#include <stdio.h>

int vetor[3];
int tam = sizeof (vetor) / sizeof (int);
char opcao;
int x,i,j;


int main(){

    do {

        printf("Escreva 10 numeros: \n");
        for (i = 0; i < tam; ++i) {
            scanf("%d", &vetor[i]);

        }

        printf("Escreva um numero: ");
        scanf("%d", &x);

        int conta = 0;
        for (i = 0; i < tam; ++i) {
                if ((vetor[i] % x) == 0){
                    conta++;
                }
            }
        printf("Encontrei %d numeros multiplos de X \n ", conta);

        for ( i = 0; i < tam; ++i) {
            if ((vetor[i] % x)  == 0 ){
                printf("Multiplo %d \n", vetor[i]);
            }
        }



        printf("Deseja continuar? (s/n) \n");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    return 0;
}