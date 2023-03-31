#include <stdio.h>
#include <math.h>

/*Faça um programa que receba dois valores float:
 um de altura e um de peso, para calcular o IMC.
 Por fim mostre o resultado.
*/

void main(){
    float peso,altura,imc;
    printf("Qual seu peso: ");
    scanf("%f", &peso);
    printf("Qual sua altura: ");
    scanf("%f",&altura);
    imc = peso/pow(altura,2);
    printf("Seu IMC seria :%f",imc);
}
