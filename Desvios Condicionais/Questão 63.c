#include <stdio.h>
#include <conio.h>

void main(){
    int timeCasa, timeVisitante;
    printf("Informe o placar da partida:");
    scanf("%d%d", &timeCasa, &timeVisitante);
    if(timeCasa == timeVisitante){
        printf("O jogo terminou em empate");
    }
    if(timeCasa>timeVisitante){
        printf("O time da casa foi o vencedor");
    }
    if(timeCasa<timeVisitante){
        printf("O time de fora foi o vencedor");
    }
    getch();
}