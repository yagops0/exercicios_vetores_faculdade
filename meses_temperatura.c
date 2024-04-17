/*Escreva um algoritmo que solicite os meses do ano e a temperatura média do mês, ao final imprimir ordenando pela temperatura os meses e o valor.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 12

struct mes{
    char nome[20];
    float temperatura;  
};

int main()
{
    struct mes mesesTemperaturas[MAX];

    for(int i = 0; i < MAX; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome do mes %d: ", i+1);
        gets(mesesTemperaturas[i].nome);

        printf("\nDigite a temperatura media de %s: ", mesesTemperaturas[i].nome);
        scanf(" %f", &mesesTemperaturas[i].temperatura);
    }

    printf("\n==========================================================================================");
    printf("\nTABELA TEMPERATURA MESES");
    printf("\n==========================================================================================");

    for(int i = 0; i < MAX; i++)
    {
        printf("\n= %s \t%.1f", mesesTemperaturas[i].nome, mesesTemperaturas[i].temperatura);
    }
    printf("\n==========================================================================================");


    return 0;
}