#include<stdio.h>
#include<conio.h>

void main(){
    int horas, minutos, fuso;
    printf("Informe as horas, os minutos e o fuso:");
    scanf("%d%d%d",&horas, &minutos, &fuso);
    int novaHora = horas+fuso;
    if ((fuso<0 && novaHora>24)){
        novaHora = (24+fuso)+horas;
        printf("O horario eh %d:%d\n", novaHora, minutos);
    }
    else if ((fuso<0 && novaHora<24)){
        novaHora = horas+fuso;
        printf("O horario eh %d:%d\n", novaHora, minutos);
    }
    else if (novaHora>24 && fuso>0){
        novaHora = (horas+fuso)%24;
        printf("O horario eh %d:%d\n", novaHora, minutos);
    }
    else {printf("O horario eh %d:%d\n",novaHora,minutos);
    }
    getch();    
}