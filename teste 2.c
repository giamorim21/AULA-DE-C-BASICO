#include <stdio.h>
void main(){
   int idade = -1, total = 0, cont = 0;
  printf("Se entrar com valor -1 programa será encerrado! \n");
   do{
        printf("digite uma idade: \n");
        scanf("%d", &idade);
        if(idade > -1){
            cont++;
            total += idade; // ou total = total + idade;}
   }}while(idade >= 0);
    total /= cont; // total = total / cont;
   printf("o numero de idade acima de 18 digitadas foi: %d", total);
}
