#include <stdio.h>

void main(){
    int calculo;
    float x,y,resultado;
    printf("Digite o primeiro numero:");
    scanf("%f",&x);
    printf("Digite o segundo numero:");
    scanf("%f",&y);

    printf("Escolha uma das operacoes abaixo:\n");
    printf("1- Soma\n");
    printf("2- Subtracao\n");
    printf("3- Divisao\n");
    printf("4- Multiplicacao\n");

    printf("Digite a operaca escolhida:");
    scanf("%d",&calculo);

    switch(calculo){
    case 1:
        resultado = x + y;
        printf("A soma eh = %.2f\n", resultado);
        break;
    case 2:
        resultado = x - y;
        printf("A subtracao eh = %.2f\n", resultado);
        break;
    case 3:
        resultado = x/y;
        printf("A divisao eh = %.2f\n", resultado);
        break;
    case 4:
        resultado = x*y;
        printf("A multiplicacao eh = %.2f\n", resultado);
        break;
 }
}
