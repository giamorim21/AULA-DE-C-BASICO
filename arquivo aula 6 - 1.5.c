#include <stdio.h>

/*Faça um programa que receba 10 números em um vetor,
 calcule a média dos 10 e depois imprima a média com 2 casas decimais.
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
