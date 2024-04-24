#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX 6

/*Para apostar, você deve escolher 6 números entre 1 e 60, e você recebe o prêmio máximo se os 6 números sorteados, independentemente da ordem, forem os escolhidos por você. Para calcular qual é a chance de uma pessoa ganhar na Mega-Sena, é necessário compreender como calcular combinações e como calcular probabilidade.*/


/*Escreva um algoritmo para o jogo da mega sena*/

int existe(int numeros[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(numeros[i] == valor){
            return 0;
        }
    }
    return 1;
}

int checagemNumeros(int numer)

void menu(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n================================================================");
    printf("\n= MEGA SENA");
    printf("\n================================================================");
    printf("\n= Escolha 6 números entre 1 e 60");
    printf("\n================================================================");

}

int main(){
    int numerosUsuarios[MAX];
    int numerosSorteados[MAX];
    int quantNumerosIguais = 0;
    int v;
    char continuar;

    menu();

    setlocale(LC_ALL, "Portuguese");
    do
    {
        for(int i = 0; i < MAX; i++)
        {
            printf("\nDigite o %d° numero: ", i+1);
            scanf(" %d", &numerosUsuarios[i]);
        }

        srand(time(NULL));
        for(int i = 0; i < MAX; i++)
        {
            v = rand() % 60;
            while(existe(numerosSorteados, i, v) == 0){
                v = rand() % 60;
            }
            numerosSorteados[i] = v;
        }

        for(int i = 0; i < MAX; i++)
        {
            if(numerosUsuarios[i] == numerosSorteados[i])
            {
                quantNumerosIguais += 1;
            }
        }

        printf("\n================================================================");
        printf("\nNumeros Sorteados");
        printf("\n================================================================");

        for(int i = 0; i < MAX; i++)
        {
            printf("\t%d", numerosSorteados[i]);
        }

        printf("\n================================================================");
        printf("\nNumeros Usuario");
        printf("\n================================================================");

        for(int i = 0; i < MAX; i++)
        {
            printf("\t%d", numerosUsuarios[i]);
        }


        printf("\nDeseja jogar de novo?\n");
        scanf(" %c", &continuar);

    }while(toupper(continuar) == 'S');

    printf("\nNumeros iguais: %d", quantNumerosIguais);


    return 0;
}
