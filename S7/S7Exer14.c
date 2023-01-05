//
// Created by Vitor Frango on 03/01/2023.
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


    for (int i = 0; i < 10; ++i) {
        for (int contador2 = i + 1 ; contador2   < 5 ; ++contador2 ) {

            if (vector[i] == vector[contador2]){
                iguais=iguais+1;
            }
        }


    }
    printf("Existem %d numeros identicos: \n", iguais);

    return 0;
}