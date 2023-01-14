//
// Created by Vitor Frango on 14/01/2023.
//
#include <stdio.h>

int main (){

    int vector[10];
    int iguais = 0;


    printf("Escreva 10 numeros: \n");
    for (int i = 0; i < 10; ++i) {

        scanf("%d", &vector[i]);

    }
    printf("Os numeros introduzidos foram: \n");
    for (int i = 0; i < 10; ++i) {
        printf("%d \n", vector[i]);

    }


    for (int contador1  = 0; contador1 < 10; ++contador1) {
        for (int contador2 = contador1 + 1 ; contador2   < 10 ; ++contador2 ) {

            if (vector[contador1] == vector[contador2]){
                iguais=iguais+1;
            }
        }


    }
    printf("Existem %d numeros identicos: \n", iguais);

    return 0;
}