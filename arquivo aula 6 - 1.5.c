#include <stdio.h>

/*Fa�a um programa que receba 10 n�meros em um vetor,
 calcule a m�dia dos 10 e depois imprima a m�dia com 2 casas decimais.
 */

void main(){
    int n,vetor[10];;
    float media;
    for(n = 0;n < 10;n++){
        printf("Digite 10 valores inteiros:");
        scanf("%d",&vetor[n]);
        media += vetor[n];
        }

    media = media/n;
    printf("A media eh igual a %.2f:\n",media);
    }
