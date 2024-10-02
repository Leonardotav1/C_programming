#include <conio.h>
#include <stdio.h>

void main(){
    float area, valorMetro;
    printf("Informe a area do terreno:");
    scanf("%f", &area);
    printf("Informe o valor por metro quadrado:");
    scanf("%f", &valorMetro);
    float valorTotal = area * valorMetro;
    printf("O valor a ser cobrado eh: R$ %.2f por metro quadrado", valorTotal);
    getch();

}