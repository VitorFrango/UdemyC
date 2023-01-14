//
// Created by Vitor Frango on 14/01/2023.
//
//
// Created by Vitor Frango on 05/01/2023.
//
#include <stdio.h>


int vector[10];
int tam = sizeof(vector) / sizeof(int);
int i, j, k;


int main (){

    printf("Escreva 10 numeros: \n ");

    for ( i = 0; i < 10; ++i) {
        scanf("%d", &vector[i]);
    }

    printf("Os numeros introduzidos foram:  \n");
    for ( i = 0; i < 10 ; ++i) {
        printf("%d \n", vector[i]);
    }


    /* Remove elementos com valor duplicado */
    for(  i = 0; i < tam; i++ )
    {
        for(  j = i + 1; j < tam; )
        {
            if( vector[j] == vector[i] )
            {
                for(  k = j; k < tam; k++ )
                    vector[k] = vector[k + 1];

                tam--;
            }
            else
            {
                j++;
            }
        }
    }

    /* Exibe Vetor Depois */
    printf("Depois: \n ");
    for(  i = 0; i < tam; i++ )
        printf("%d ", vector[i] );
    printf("\n");

    return 0;
}