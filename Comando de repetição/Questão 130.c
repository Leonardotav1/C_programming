#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char nome[50],ganhador[50];
    int quantidade,numero,k,contador=0;
    printf("Informe a quantidade de pessoas:");
    scanf("%d",&quantidade);
    for(k=1;k<=quantidade;k++){
        fflush(stdin);
        printf("Informe seu nome:");
        gets(nome);
        printf("Informe o numero de seu bilhete:");
        scanf("%d",&numero);
        if(k == numero){
            contador++;
            strcpy(ganhador,nome);
        }
    }
    if(contador==1){
        printf("O ganhador do sorteio foi %s",ganhador);
    }

}