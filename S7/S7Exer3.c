//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>
#include <math.h>

int main() {

    float numeros[3];
    float num_sqrt[3];

    for (int i = 0; i < 3; ++i) {
        printf("Escreva 3 numeoros reais: \n");
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < 3; ++i) {
        printf("O numeros introduzidos são: [%.2f]\n", numeros, numeros[i]);

    }

    for (int i = 0; i < 3; ++i) {
        num_sqrt[i] = numeros[i] * numeros[i];
        printf("O Quadrado dos numeros introduzidos é: [%f]\n", num_sqrt, num_sqrt[i]);
    }
    return 0;
}