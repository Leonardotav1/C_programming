#include <stdio.h>
#include <conio.h>
const float Kw = 0.35;
const float taxa = 0.17;

void main(){
    int leituraAnterior;
    int leituraAtual;
    printf("Informe a quantidade de Kw no mes passado:");
    scanf("%d", &leituraAnterior);
    printf("Informe a quantidade de Kw nesse mes:");
    scanf("%d", &leituraAtual);
    int KwTotal = leituraAnterior-leituraAtual;
    float valor = KwTotal*Kw;
    float icms = valor*taxa;
    float iluminacao = 15;

    float valorConta = (valor + icms) + iluminacao;
    printf("A conta esta no valor de R$%.2f", valorConta);
    getch();

}