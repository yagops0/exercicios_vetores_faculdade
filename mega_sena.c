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
    int valorChecar;
    char continuar;

    menu();

    setlocale(LC_ALL, "Portuguese");
    do
    {
        quantNumerosIguais = 0;
        for(int i = 0; i < MAX; i++)
        {
            printf("\nDigite o %d° numero: ", i+1);
            scanf(" %d", &numerosUsuarios[i]);
        }

        srand(time(NULL));
        for(int i = 0; i < MAX; i++)
        {
            v = rand() % 61;
            while(existe(numerosSorteados, i, v) == 0){
                v = rand() % 61;
            }
            numerosSorteados[i] = v;
        }

        for(int i = 0; i < MAX; i++)
        {
            valorChecar = numerosUsuarios[i];
            for(int j = 0; j < MAX; j++)
            {
                if(numerosSorteados[j] == valorChecar)
                {
                    quantNumerosIguais++;
                    break;
                }
            }
        }

        printf("\n================================================================");
        printf("\nNumeros Sorteados");
        printf("\n================================================================\n");

        for(int i = 0; i < MAX; i++)
        {
            printf("\t%d", numerosSorteados[i]);
        }

        printf("\n================================================================");
        printf("\nNumeros Usuario");
        printf("\n================================================================\n");

        for(int i = 0; i < MAX; i++)
        {
            printf("\t%d", numerosUsuarios[i]);
        }

        printf("\n================================================================");

        if(quantNumerosIguais == 4)
        {   
            printf("\n================================================================");
            printf("\nVocê acertou 4 numeros!");
            
        }
        else if(quantNumerosIguais == 5)
        {
            printf("\n================================================================");
            printf("\nVocê acertou 5 numeros!");
            printf("\nOs numeros foram: ");
        }
        else if(quantNumerosIguais == 6)
        {
            printf("\n================================================================");
            printf("\nPARABENS!! VOCE GANHOU O PREMIO TODO!!");
        }
        else
        {
            printf("\n================================================================");
            printf("\nVocê acertou %d numero(s), infelizmente não ganhou nenhum prêmio.", quantNumerosIguais);
        }



        printf("\n================================================================");
        printf("\nDeseja jogar de novo?\n");
        scanf(" %c", &continuar);
        printf("\n================================================================");
    }while(toupper(continuar) == 'S');

    


    return 0;
}
