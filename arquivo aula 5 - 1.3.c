#include <stdio.h>

/*Fa�a um programa que pergunte ao usu�rio quantos n�meros ser�o digitados N n�meros inteiros,
e todos os n�meros menores ou igual a 0 passem a ser 1 .
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
