#include <stdio.h>
#include <math.h>

/*Receba um valor em Real (R$) (float)
e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).
*/

void main(){
   float real,dolar,euro;
   printf("Qual seu valor em real: ");
   scanf("%f",&real);
   dolar = (real / 5);
   euro = (real / 4.8);
   printf("seu valor em dolar: %f",dolar);
   printf("seu valor em euro: %f",euro);

}
