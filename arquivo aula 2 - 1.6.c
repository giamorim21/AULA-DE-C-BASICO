#include <stdio.h>

/*O professor aplicou a avaliação em sua turma
 e deseja mostrar se o aluno foi aprovado (nota maior ou igual a 5) ou reprovado(nota menor que 5).
  Desenvolva o programa que leia a nota do aluno e gere a tela de saída com
as informações solicitadas
*/

void main(){
    float nota_do_aluno;

    printf ("Qual eh a nota do aluno:");
    scanf("%f",&nota_do_aluno);

    if (nota_do_aluno >= 5){
        printf("Aluno aprovado");
    }
      else if (nota_do_aluno < 5){
        printf ("Aluno reprovado");
      }

}
