/*!Escreva um algoritmo que peça para o usuário 5 valores decimais, posteriormente mais 5. Ao final faça a soma desses valor conforme sua ordem.!*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
    float valores1[MAX];
    float valores2[MAX];
    float arraySomas[MAX];
    int i, j, k;

    printf("\nPRIMEIROS VALORES");
    for(i = 0; i < MAX; i++)
    {
        printf("\n\nDigite o numero da posicao %d: ", i);
        scanf("%f", &valores1[i]);
    }

    printf("\nPROXIMOS VALORES");
    for(j = 0; j < MAX; j++)
    {
        printf("\n\nDigite o numero da posicao %d: ", j);
        scanf("%f", &valores2[j]);
    }

    for(i = 0, j = 0, k = 0; i < MAX, j < MAX, k < MAX; i++, j++, k++)
    {
        arraySomas[k] = valores1[i] + valores2[j];

    }

    for(i = 0, j = 0, k = 0; i < MAX, j < MAX, k < MAX; i++, j++, k++)
    {
        printf("\n A soma entre %.2f e %.2f = %.2f", valores1[i], valores2[j], arraySomas[k]);
    }
    return 0;
}