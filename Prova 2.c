#include <stdio.h>

void numero(int x){
    if(x%2==0){
        printf("Esse numero eh multiplo de 2");
    }else{
        printf("Esse numero nao eh multiplo de 2");
        }
    }
void main(){
    int x;
    printf("Digite um numero:");
    scanf("%d",&x);
    numero(x);
    }
