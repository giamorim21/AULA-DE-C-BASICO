#include <stdio.h>

/*Escrever um programa que solicita ao usuário um conjunto de 10 valores reais
e mostrar a média dos 10 números .(usando só o FOR)(dois casa decimal)
*/

void main(){
    int i, conta = 0;
    float media = 0, n;

    for (i = 0;i < 10;i++){
        printf("Escolha um valor:");
        scanf("%f",n);
        media += n;
        }
    media = media/10;
    printf("A media eh: %2f\n",media);

    }
