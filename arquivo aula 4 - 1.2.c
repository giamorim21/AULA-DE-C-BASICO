#include <stdio.h>
/*
Escreva um algoritmo que solicita ao usuário N idades,
 o  programa deve calcular a média das idades digitas.
 E ao final do código mostrar a média.
  programa deve solicitar valores até que o usuário entre com -1.)
(Usando do while)
*/

void main(){
   float idade = 0, media = 0, cont = 0, cont_idade = 0;
    do{
        printf("coloque as idades:");
        cont++;
        cont_idade += idade;
        scanf("%f",&idade);
    }while(idade != -1);
     media = cont_idade/(cont-1);
     printf("A media das idades eh %f",media);

    }
