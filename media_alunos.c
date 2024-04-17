#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo para auxiliar o professor no cálculo da média aritmética dos alunos, o algoritmo deve solicitar 
primeiramente a quantidade de alunos, seus nomes e duas notas (n1 e n2)*/

struct aluno
{
    char nome[50];
    float nota1;
    float nota2;
    float media;

};


int main(){
    int quantAlunos;
    

    printf("\nDigite a quantidade de alunos: ");
    scanf(" %d", &quantAlunos);

    struct aluno alunos[quantAlunos];

    for(int i = 0; i < quantAlunos; i++)
    {
        fflush(stdin);
        printf("\nDigite o nome do aluno %d: ", i + 1);
        gets(alunos[i].nome);
        printf("\nDigite a primeira nota do aluno %d: ", i + 1);
        scanf(" %f", &alunos[i].nota1);
        printf("\nDigite a segunda nota do aluno %d: ", i + 1);
        scanf(" %f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }

    printf("\n\nMEDIAS:");
    printf("\n\n");

    for(int i = 0; i < quantAlunos; i++)
    {
        fflush(stdin);
        printf("\n%s = %.1f\n", alunos[i].nome, alunos[i].media);
    }

    

    return 0;
}