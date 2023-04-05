#include <stdio.h>
/*
Faça um programa que receba 5 valores,
e armazene-os em vetores, após isso mostre os valores na tela de saída,
mas se o valor for positivo mostre-o sendo negativo.
*/
void main(){
    int n, vetor[5];
    for (n = 0;n < 5;n++) {
        printf("Digite um valor para ser salvo na posicao %d do vetor:", n);
        scanf("%d",&vetor[n]);
        }
        printf("os valores que voce digitou foram:");
        for (n = 0;n < 5;n++){
            if(vetor[n] < 0){
              printf("%d",vetor[n]);
            }else{
            printf("-%d", vetor[n]);
            }
        }
}
