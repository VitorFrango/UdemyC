//
// Created by Vitor Frango on 22/01/2023.
//

#include <stdio.h>
#define Max  5

int vetor[Max];
int vetor2[Max];
int i, j;

int main (){

    printf("Esceva 10 numros inteiros dentro do intervalo [0...50]\n ") ;

        for (int i = 0; i < Max; ++i) {
            scanf(" %d", vetor[i]);
            if ((vetor[i] >= 0) && (vetor[i] <= 50)) {
                
            } else {
                printf("O numero introduzido está fora de [0...50] \n");
            }
        }
    for (int i = 0; i < Max; ++i) {
        printf("Os valores introduzidos são na posição [%d) = %d ", i, vetor[i]);
    }
    return 0;
}























