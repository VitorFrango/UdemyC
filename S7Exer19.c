//
// Created by Vitor Frango on 15/01/2023.
//

#include <stdio.h>
#define Max  5

int vetor[Max];
int tam = Max;
int total = 0 ;


int main (){

    for (int i = 0; i < tam; ++i) {
            total = i + ( 5 * i) % (i +1);  
    }
    for (int i = 0; i < tam; ++i) {
        printf("%d \n", vetor[total]);
    }





    return 0 ;
}