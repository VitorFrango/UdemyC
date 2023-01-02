//
// Created by Vitor Frango on 31/12/2022.
//


#include <stdio.h>

int main(){

    int notas[15];
    int media, soma;

    printf("Qunatas notas quer introduzir? \n");
    scanf("%d", &notas);
    printf("Escreva as notas dos alunos: \n");

    for (int i = 0; i < 15; ++i) {
        scanf("%d", &notas[i]);


    }

    for (int i = 0; i < 15; ++i) {
        printf("A notas foram [%d] \n", notas[i]);

    }

    for (int i = 0; i < 15; ++i) {
        soma += notas[i];


    }

    media = soma / 5;
    printf("A media das notas foi: %d \n", media);
    printf("A somaa das notas foi: %d \n", soma);

    return 0 ;
}