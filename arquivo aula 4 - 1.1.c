#include <stdio.h>

/*Escreva um algoritmo que solicita ao usuário N idades,
o  programa apenas leva em conta idades maiores ou iguais que 18.
 E ao final do código deve mostrar o número de usuários que tem +18.
 O programa deve solicitar valores até que o usuário entre com -1. (Usando while)
 */

void main(){
    int cont = 0, x = 0;
    while(x != -1){
        printf("Coloque uma idade:");
        scanf("%d",&x);
        if(x >= 18){
            cont++;
            }
    }
    printf("Temod %d idades",cont);


}
