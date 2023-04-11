#include <stdio.h>

void maximo(int x, int y){
    if(x>y){
        printf("Maior valor: %d",x);
    }else if(y>x){
        printf("Maior valor: %d",y);
    }else{
        printf("Maior valor: %d",x);
        }
        }
void main(){
    int x,y;
    printf("Digite um valos para x:");
    scanf("%d",&x);
    printf("Digite um valos para y:");
    scanf("%d",&y);
    maximo(x,y);
    }
