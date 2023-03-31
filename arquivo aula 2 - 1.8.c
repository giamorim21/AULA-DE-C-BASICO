#include <stdio.h>

/*Desenvolva a função máxima que recebe dois números inteiros e retorna o maior deles.
Se os números forem iguais, retorne um deles. A função main (programa) lê dois números,chama a função máximo passando os dois argumentos (os valores lidos) e gera a tela de saída com o valor retornado pela função máxima.
usando o comando<switch>
*/

void main (){
    int x, y;
    printf("Digite o primeiro numero =");
    scanf("%d",&x);

    printf("Digite o segundo numero =");
    scanf("%d",&y);
    switch(x>y){
 case 1 :
    printf("Maior valor: %d",x);
    break;
 case 0 :
    printf("Maior valor: %d",y);
    break;
}
}

