#include<stdio.h>

/*
Cria um Algoritmo que verifica se um número é PAR ou IMPAR:
*/

void main(){
    int x;
    printf("Digite um numero:");
    scanf("%d",&x);

    if (x % 2 == 0){
       printf("esse numero eh par");
       }
     else if ( x % 2 != 0){
       printf("esse numero eh impar");}

}
