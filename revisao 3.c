#include <stdio.h>

/*criar um programa que receba duas notas do usuário
 e verifique se o valor de cada uma delas está entre 0 e 11?
 Caso esteja, o programa deve calcular a média das duas notas
 e exibir o resultado ao usuário.
(usando switch case)
*/

void main(){
    float nota1, nota2, media;
    printf("Digite sua primeira nota:");
    scanf("%f",&nota1);
    printf("Digite sua segunda nota:");
    scanf("%f",&nota2);
    switch(nota1>=0 && nota1<=11){
    case 1:
        printf("Nota 1:%.2f\n",nota1);
        break;
    case 0:
        printf("Nota fora do intervalo\n");
        break;
        }
    switch(nota2>=0 && nota2<=11){
    case 1:
        printf("Nota 2:%.2f\n",nota2);
        break;
    case 0:
        printf("Nota fora do intervalo\n");
        break;
        }
    media = (nota1 + nota2)/2;
    printf("A media das suas notas eh %.2f",media);
    }

