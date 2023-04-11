#include <stdio.h>

void main(){
    int n,vetor[8],cont=0,soma=0,media=0;
    for(n=0;n<8;n++){
        printf("Digite os valores da lista:");
        scanf("%d",&vetor[n]);
        soma += vetor[n];
        cont++;
    }
    printf("Esses foram os valores escolhidos:\n" );
    for(n=0;n<8;n++){
        printf("[%d]\n\n",vetor[n]);
    }
    printf("A lista possui %d elementos.\n\n",cont);
    printf("A soma dos valores da lista eh %d.\n\n",soma);
    media = soma/cont;
    printf("A media eh igual a %d.\n",media);
    }
