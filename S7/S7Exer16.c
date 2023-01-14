//
// Created by Vitor Frango on 14/01/2023.
//
#include <stdio.h>

float vetor[5];
float tam = sizeof(vetor) / sizeof(int);
int codigo, i ;

int main(){

    printf("Escreva 5 numeros reais: \n");
    for ( i = 0; i < tam; ++i) {
        scanf("%.1f", &vetor[i]);

    }

    printf("Escreva agora um codigo inteiro: \n");
    scanf("%d", &codigo);

    for (int i = 0; i < tam; ++i) {
        printf("%f", vetor[i]);

    }
    printf("Os valores introduzidos são: \n" );
    printf("O codigo introduzido é: %d \n", codigo);



    return 0;
}