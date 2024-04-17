/*Escreva  um algoritmo que solicite 10 números ao usuario e ao final mostre os numeros pares e impares*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5



int main(){
    int numeros[MAX];

    for(int i = 0; i < MAX; i++)
    {
        printf("\nDigite o numero da posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros Pares");
    for(int i = 0; i < MAX; i++)
    {
        if(numeros[i] % 2 == 0)
        {
            
            printf("\t%d", numeros[i]);
        }
    }

    printf("\nNumeros Impares");
    for(int i = 0; i < MAX; i++)
    {
        if(numeros[i] % 2 != 0)
        {
            printf("\t%d", numeros[i]);
        }
    }


    return 0;
}