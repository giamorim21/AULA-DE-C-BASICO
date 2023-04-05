#include <stdio.h>

/*Escreva um algoritmo que solicita ao usuário N números inteiros, calcule
e imprima na tela do computador a média(duas casas decimais) do aluno.
(Usando FOR)
*/

void main(){
    int n;
    int i;
    float media;
    int a;

    printf("Digite quantos numeros terao que ser escolhidos:");
    scanf("%d",&a);

    for(i = 0; i <= a; i++){
        printf("digite os numeros:");
        scanf("%d",&n);
        media += n;
    }
   media = media/n;

printf("A media eh igual %.2f\n",media);
}
