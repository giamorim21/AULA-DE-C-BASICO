# include <stdio.h>

/*Criem um programa que recebe o n�mero X
 e imprime se o n�mero � maior ou menor que dois.
 */

void main(){
   int x;
   printf("Digite um numero: ");
   scanf("%d", &x);

   if(x > 2){
      printf("o numero eh maior que 2");
   }
    else if (x < 2){
       printf(" o numero eh menor que 2");
    }
}
