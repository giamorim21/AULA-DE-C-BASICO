#include <stdio.h>

/*Escreva um algoritmo que solicita ao usuário um valor N inteiro positivo
e imprime na tela do computador todos os número inteiros de 0 até N digitado.
 (Usando for)
*/

void main(){
    int n;
    int i;

    printf("Escreva um numero inteiro positivo:");
    scanf("%d",&n);

    for(i= 0; i <= n; i++){
       printf("%d\n",i);
       }

    }
