#include <stdio.h>

/*
Criem uma função que recebe o caráter da variável Y  do usuário
e imprimir esse comando → "o carácter que você escolheu foi : {%c} "
(( Essa função deve ser chamada 5 vezes ))
*/

void palavra(char y){
   printf("o caracter que voce escolheu foi : {%c}\n",y);
   }

void main(){
    char y;
    scanf("%c",&y);
    palavra(y);
    palavra(y);
    palavra(y);
    palavra(y);
    palavra(y);
    }
