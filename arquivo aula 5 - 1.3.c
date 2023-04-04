#include <stdio.h>

/*Faça um programa que pergunte ao usuário quantos números serão digitados N números inteiros,
e todos os números menores ou igual a 0 passem a ser 1 .
(usa FOR)
*/

void main(){
   int n;
int comp;
   printf("Digite um numero inteiro:");
   scanf("%d",&n);

   for(int i = 0; i <= n; i++){
        printf("Digite um numero inteiro:");
        scanf("%d",&comp);
     if(comp <= 0){
       printf("\n1");
       }else{
       printf("%d\n",comp);
       }
     }
  }
