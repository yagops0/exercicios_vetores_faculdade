#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

/*6 - Escreva um algoritmo para uma pesquisa sobre qual sistema operacional mais utilizado, as opções são: Windows, Linux, MacOS. A pesquisa deve considerar pelo menos 10 respostas e ao final mostrar a quantidade de votos e seu percentual. pesquisa_sistema.c
FÓRMULA % = (parte ÷ todo) x 100.

*/

float calculoPercentual(float parte, float todo){
    float percentual;
    percentual = (parte / todo) * 100;

    return percentual;
}


int main(){
    float quantVotosWin, quantVotosLinux, quantVotosMac;
    char so[20];
    quantVotosWin = quantVotosLinux = quantVotosMac = 0;

    for(int i = 0; i < MAX; i++){
        printf("\nDigite a escolha do seu Sistema Operacional: ");
        gets(so);

        if(strcmp(so, "Windows") == 0){
            quantVotosWin += 1;
        }
        else if(strcmp(so, "Linux") == 0){
            quantVotosLinux += 1;
        }
        else if(strcmp(so, "MacOS") == 0){
            quantVotosMac += 1;
        }


    }

    fflush(stdin);

    printf("\nWindows - Votos: %.0f Percentual: %.0f%%", quantVotosWin, calculoPercentual(quantVotosWin, MAX));
    printf("\nLinux - Votos: %.0f Percentual: %.0f%%", quantVotosLinux, calculoPercentual(quantVotosLinux, MAX));
    printf("\nMacOS - Votos: %.0f Percentual: %.0f%%", quantVotosMac, calculoPercentual(quantVotosMac, MAX));



    return 0;
}