#include <stdio.h>

/*Desenvolva a fun��o m�xima que recebe dois n�meros inteiros e retorna o maior deles.
Se os n�meros forem iguais, retorne um deles. A fun��o main (programa) l� dois n�meros,chama a fun��o m�ximo passando os dois argumentos (os valores lidos) e gera a tela de sa�da com o valor retornado pela fun��o m�xima.
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

