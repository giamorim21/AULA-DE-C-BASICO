#include <stdio.h>

/*Achar o maior e o menor número de uma série de números fornecidos pelo usuário via teclado.
 O programa deve solicitar valores até que o usuário entre com -1. (Usando while e condicionais)
 */

 void main(){
     int x, maior, menor;

   printf("Digite um número (-1 para parar): ");
   scanf("%d", &x);

   while (x != -1) {
      printf("Digite outro número (-1 para parar): ");
      scanf("%d", &x);

      if (x > maior) {
         maior = x;
      }
      if (x < menor) {
         menor = x;
      }
   }

   printf("O maior número é %d.\n", maior);
   printf("O menor número é %d.\n", menor);
}
