#include <stdio.h>
#include <conio.h>
const int ORDEM=4;

void main(){
    float mat[ORDEM][ORDEM];
    int i,j,posicao;
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("Informe um numero real:");
            scanf("%f",&mat[i][j]);
        }
    }
    printf("Verificando a posicao:\n");
    float maior;
    for(i=0;i<ORDEM;i++){
        maior=mat[i][0];
        posicao=0;
        for(j=1;j<ORDEM;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                posicao = j;
            }
        }
        printf("Linha %d, posicao %d\n",i,posicao);
    }
    getch();
}