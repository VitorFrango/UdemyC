//
// Created by Vitor Frango on 01/01/2023.
//

#include <stdio.h>

int main(){

    float numero[10];
    int i, soma;
    int cont = 3;
    int qts = 0;

    printf("Escreva 10 numneros reais: \n");
    for (int i = 0; i < cont; ++i) {
        scanf("%f", &numero[i]);


    }

    for (int i = 0; i < cont; ++i) {
        printf("Os numeros introduzidos foram: [%0.f] \n", numero[i]);

        if (numero[i] < 0) {
            qts++;

        }

        else if (numero[i] > 0){
            soma += numero[i];

        }
    }
    printf("Escreveu %d numeros negativos \n", qts);
    printf("A soma dos nunmeros pares é %0.f", soma);


    return 0;
}