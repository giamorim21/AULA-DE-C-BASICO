#include <stdio.h>
#include <math.h>

/*Receba (input) o valor de um salário e
 mostre o quanto deve ser depositado de FGTS
 (8% do valor salário) para este salário informado
*/
void main(){
    float salario, fgts;
    printf("Qual valor do salario: ");
    scanf("%f",&salario);
    fgts = (salario*8)/100;

    printf("com o salario de %f", salario);
    printf("o FGTS sera de %f",fgts);

}


