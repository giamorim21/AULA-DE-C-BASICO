#include <stdio.h>

/*Faça uma função que receba um inteiro
e mostre na tela se ele for múltiplo de 2.
*/

void numero (int x){
  if (x % 2 == 0) {
    printf ("Esse numero eh multiplo de 2\n",x);
    }

   else { if ( x % 2 != 0){
   printf (" Esse numero nao eh multiplo de 2\n",x);
   }
}
}
void main (){
  int x;
  scanf("%d",&x);
  numero(x);
    }
