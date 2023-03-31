#include <stdio.h>

/*
Faça um programa que retorna a hora que for digitada
e cumprimente de acordo com o horário.
*/

void main(){
    int horas;

    printf("Qual eh a hora agora?:");
    scanf("%d",&horas);

    if (horas >= 0 && horas < 6){
    printf("Agora sao %d horas. Boa madrugada!", horas);
    }
    else if (horas > 5 && horas < 12){
    printf("Agora sao %d horas. Bom dia!", horas);
    }
    else if (horas > 11 && horas < 18){
    printf("Agora sao %d horas. Boa tarde!", horas);
    }
    else if ( horas >= 18 && horas < 23 ){
    printf("Agora sao %d horas. Boa noite!", horas);
    }


}
