#include <stdio.h>

void main(){
    float salario;
    printf("Digite o valor do salario:");
    scanf("%f",&salario);
    if(salario<1200 && salario>0){
        printf("Esse salario esta fora da legislacao");
    }else if(salario>1200){
        printf("Esse salario esta dentro da legislacao");
        }else if(salario<0){
            printf("Valor invalido");
            }
    }
