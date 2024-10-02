#include<stdio.h>
#include<conio.h>

void main(){
    float real,cotacao;
    printf("Informe o valor em real:");
    scanf("%f", &real);
    printf("Informe a cotacao do dolar:");
    scanf("%f", &cotacao);
    float dolar= real*cotacao;
    printf("O valor em dolar eh %.2f", dolar);
    getch();
}