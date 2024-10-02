#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float valorCompra, lucro;
    printf("Informe o valor do produto:");
    scanf("%f", &valorCompra);
    printf("Informe a margem de lucro em porcentagem:");
    scanf("%f", &lucro);
    float valorVenda = (valorCompra*(lucro/100))+valorCompra;
    printf("O valor de venda eh: R$%.2f", valorVenda);
    getch();
}
