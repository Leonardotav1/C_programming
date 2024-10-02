#include <stdio.h>
#include <conio.h>
const int VALORACERTOS = 5;
const int VALORERROS = 3;

void main(){
    int numCertas,numErradas,numBrancas;
    printf("Informe o numero de acertos:");
    scanf("%d", &numCertas);
    printf("Informe o numero de erros:");
    scanf("%d", &numErradas);
    printf("Informe quantas deixou em branco:");
    scanf("%d", &numBrancas);
    int acertos = numCertas*VALORACERTOS;
    int erros = numErradas*VALORERROS;
    int resultado = acertos-erros;
    printf("Voce conseguiu %d pontos!", resultado);
    getch();
}