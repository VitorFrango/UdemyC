//
// Created by Vitor Frango on 15/01/2023.
//

#include <stdio.h>
#define Max  5

int vetor[Max];
int tam = Max;
int total, parc1, parc2 = 0 ;


int main (){

    for (int i = 0; i < tam; ++i) {

             total = vetor[i] + ( 5 * vetor[i]) % (vetor[i] +1);

    }
    for (int i = 0; i < tam; ++i) {
        printf("%d %d \n", total, vetor[i]);
    }





    return 0 ;
}