#include <stdio.h>
#include <conio.h>

void main(){
    int numCandidato;
    printf("Informe o numero do candidato:");
    scanf("%d", &numCandidato);
    int num = numCandidato/1000; /*Divide e armazena os dois primeiros numeros*/
    switch (num){
    case 13:
        printf("O candidato eh do PT");
        break;
    case 14:
        printf("O candidato eh do PTB");
        break;
    case 15:
        printf("O candidato eh do PMDB");
        break;
    case 25:
        printf("O candidato eh do DEM");
        break;
    case 45:
        printf("O candidato eh do PSDB");
        break;
    case 65:
        printf("o candidato eh do PCdoB");
        break;
    default:
        printf("O numero informado nao pertence a nenhum candidato");
        break;
    }
}