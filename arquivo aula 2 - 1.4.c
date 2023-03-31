# include <stdio.h>

/*Criem um programa que recebe o número X
e imprime se o número é maior, menor ou igual a dois.
*/

void main(){
    int x;
    printf("Digite um numero:");
    scanf("%d",&x);

    if (x > 2){
        printf("Esse numero eh maior que 2.");
        }
    else if (x < 2){
        printf("Esse numero eh menor que 2.");
        }
    else{
        printf("Esse numero eh 2");
        }

}
