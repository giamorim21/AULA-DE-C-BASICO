#include <stdio.h>
/*
Faça um programa que receba 3 valores,
e armazene-os em vetores, após isso mostre os valores na tela.
*/
void main() {
    int n, vetor[3];
    for (n = 0; n < 3; n++) {
        printf("Digite um valor para salvar na posicao %d do vetor: ", n);
        scanf("%d", &vetor[n]);
    }

    printf("Os valores que voce digitou sao: ");
    for (n = 0;n < 3;n++){
    printf("%d ", vetor[n]);
    }
    }





