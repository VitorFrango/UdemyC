//
// Created by Vitor Frango on 23/12/2022.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[11];
    int i, maior, menor, maiorp, menorp;
    printf("Insira os valores para o vetor 1: \n\n");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&vet[i]);
        printf("***\n");
    }
    menor = vet[1];
    maior = vet[1];

    for(i=1;i<=10;i++)
    {

        if(vet[i]<=menor)
        {
            menor = vet[i];
            menorp = i;
        }
        else if(vet[i]>=maior)
        {
            maior = vet[i];
            maiorp = i;
        }
        else{}
    }
    printf("O maior valor eh %d, que esta na posicao %d\n", maior,maiorp);
    printf("O menor valor eh %d, que esta na posicao %d\n", menor,menorp);
    return 0;
}