#include <conio.h>
#include <stdio.h>

void main(){
    int termoInicial,razao,num,k;
    printf("Informe o termo inicial e a razao:");
    scanf("%d%d", &termoInicial,&razao);
    printf("Informe a quantidade de termos:");
    scanf("%d", &num);
    int progressao = termoInicial;
    for(k=1;k<=num;k++){
        printf("%d ",progressao);
        progressao = progressao+razao; 
    }
    getch();
}