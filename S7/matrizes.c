//
// Created by Vitor Frango on 22/12/2022.
//
#include <stdio.h>


// vetores parte 1 , array multi dimensional

int main() {

    // vetores e strings
    char nome[3][50];
    for (int i = 0; i < 3; ++i) {
        printf("Qual o seu nome? \n");
        gets(nome[i]);

    }
    for (int i = 0; i < 3; ++i) {
        printf("Ola %s \n", nome[i]);
    }


    return 0;
}