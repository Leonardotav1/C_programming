#include <stdio.h>
#include <conio.h>
const int ORDEM=3;

void main(){
    int mat[ORDEM][ORDEM];
    int i,j;
    int soma=0;
    int soma2=0;
    int soma3=0;
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("Informe um numero:");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("A matriz informada foi:\n");
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    //primeira coluna
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM-2;j++){
            soma=soma+mat[i][j];
        }
    }
    printf("o valor da soma da primeira coluna e %d\n", soma);
    //primeira coluna

    //segunda coluna
    for(i=0;i<ORDEM;i++){
        for(j=1;j<ORDEM-1;j++){
            soma2=soma2+mat[i][j];
        }
    }
    printf("O valor da soma da segunda coluna e %d\n", soma2);
    //segunda coluna

    //terceira coluna
    for(i=0;i<ORDEM;i++){
        for(j=2;j<ORDEM;j++){
            soma3=soma3+mat[i][j];
        }
    }
    printf("O valor da soma da terceira coluna e %d", soma3);
    //terceira coluna
    getch();
}