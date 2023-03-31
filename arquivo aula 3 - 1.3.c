#include <stdio.h>

/*
Criem uma função que recebe o número X do usuário
e se o número for maior que 5 imprimir → "X é maior que 5."
(( Essa função deve ser chamada 3 vezes ))
*/

void numero (int x){
   if ( x > 5){
     printf("x eh maior que 5\n",x);
     }
     else { if ( x < 5 )
        printf("x eh menor que 5\n",x);
     }
}
void main(){
    int x;
    scanf("%d", &x);
     numero (x);
     numero (x);
     numero (x);
     }


