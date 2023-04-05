include <stdio.h>
/*Escrever um programa que solicita ao usuario um conjunto de 4 valores(usando Define) reais
e verifica quantos estão acima da média(dois casa decimal).


void main(){
    float vetor[MAX];
    int contador = 0;
    int c;
    float m;
    for (c = 0;c < MAX;c++) {
       printf("Digite um valor:\n");
       scanf("%f",&vetor[c]);
       m += vetor[c];
       }

       m/=MAX;
       for(c = 0;c < MAX;c++){
          if(vetor[c]>m){
            contador+=1;
          }
        }
       printf("O valor da media eh %.2f\n",m);
       printf("A quantidade de valores maiores que a media eh:%d",contador);
    }
