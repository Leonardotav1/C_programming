#include <stdio.h>
#include <conio.h>

void main(){
    int posicao;
    printf("Informe a posicao:");
    scanf("%d", &posicao);
    int guiche = ((posicao-1)%5)+1;
    int minutos = ((posicao)/5-1)*15;
    printf("Voce sera atendido no guiche %d, e vai esperar %d minutos", guiche,minutos);
    getch();
}