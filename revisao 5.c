#include <stdio.h>

/*Você poderia escrever um algoritmo que solicite ao usuário que insira notas até que o valor
 -1 seja inserido e, em seguida, verifique se cada nota está entre 0 e 11.
 O programa deve calcular a média das notas válidas e exibir o resultado ao usuário.
  Como parte do seu algoritmo,
   faça o código usando a estrutura de repetição WHILE e a DO WHILE.
   */

void main(){
    float nota=0, media,ct=0;

    while(nota!= -1){
        printf("Digite uma nota:");
        scanf("%f",&nota);
        if(nota>=0 && nota<=11){
        media += nota;
        ct++;
            }

            }
      media = media/ct;
      printf("A media eh %.2f:",media);
}
