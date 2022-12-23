//
// Created by Vitor Frango on 22/12/2022.
//

#include <stdio.h>

int main() {

    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;

    for (int i = 0; i < 6; ++i) {
        printf("O vetor contem os dados %d \n", A[i]);

    }

    soma = A[0] + A[1] + A[5];
    printf("A soma dos 3 valores é  = %d \n", soma);

    A[4] = 100;
    for (int i = 0; i < 6; ++i) {
        printf(" Os valores gusradados no vetor são: %d \n", A[i]);

    }

    return 0;
}