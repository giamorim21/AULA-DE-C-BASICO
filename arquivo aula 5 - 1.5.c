#include <stdio.h>

/*Escreva um algoritmo que solicita ao usuário N números inteiros,
 calcule e imprima na tela do computador a média(duas casas decimais) do aluno.
(Usando FOR)
*/

void main(){
   int n;
   float media,i,a;

    printf("Quantos numeros devem ser digitados:");
    scanf("%d",&n);


    for (i = 0;i < n; i++){
        printf ( " Digite os numeros: " );
        scanf ( "%f" ,&a);
        media += a;
    }
   media = media/n;
   printf("A media eh igual %.2f \n " ,media);
}


