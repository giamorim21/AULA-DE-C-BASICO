#include <stdio.h>

/*Voc� poderia escrever um algoritmo que solicite ao usu�rio que insira notas at� que o valor
 -1 seja inserido e, em seguida, verifique se cada nota est� entre 0 e 11.
 O programa deve calcular a m�dia das notas v�lidas e exibir o resultado ao usu�rio.
  Como parte do seu algoritmo,
   fa�a o c�digo usando a estrutura de repeti��o WHILE e a DO WHILE.
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
