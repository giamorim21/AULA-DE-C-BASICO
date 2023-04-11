# include <stdio.h>

void main(){
    float x,soma=0,media=0,cont=0;
    while(x!=0){
      printf("Digite um numero:");
       scanf("%f",&x);
        soma += x;
        cont++;
    }

        media = soma/(cont-1);
        printf("A media eh igual a %.2f",media);
    }
