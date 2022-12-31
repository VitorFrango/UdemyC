//
// Created by Vitor Frango on 29/12/2022.
//

#include <stdio.h>

int main (){

    int numero[6];
    int i;

    printf("Escreva 6 numeros inteiros pares: \n");
        for (int i = 0; i < 6; ++i) {
            //printf("A posição [%d] é ", i);

            scanf("%d", &numero[i]);


            if ( numero[i] % 2 == 0) {
                printf("O numeros itroduzidos foram, %d \n", numero[i]);

            } else {
                printf("O numero introduzido não é par. \n");
            }
        }
    for (int i = 5; i >= 0 ; --i) {

        printf("O numeros itroduzidos por ordem inversa foram, %d \n", numero[i]);

    }

    return 0;
}