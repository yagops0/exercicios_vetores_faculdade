#include <stdio.h>
#include <stdlib.h>
#define MAX 10

/*Escreva um algoritmo que peça para usuário 10 numeros inteiros e mostre esses numeros em ordem inversa*/

int main(){
    int numeros[MAX];

    for(int i = 0; i < MAX; i++){
        printf("\nDigite o numero da posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nARRAY PADRAO");
    for(int i = 0; i < MAX; i++){
        printf("\t%d", numeros[i]);
    }

    printf("\nARRAY INVERSO");
    for(int i = MAX - 1; i >= 0; i--){
        printf("\t%d", numeros[i]);
    }

    return 0;
}