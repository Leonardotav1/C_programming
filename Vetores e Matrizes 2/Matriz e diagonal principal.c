#include<stdio.h>
#include<conio.h>
const int ORDEM=3;

void main(){
    int mat[ORDEM][ORDEM];
    int i,j;
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
    printf("Os numeros da diagonal principal:\n");
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            if(i==j){
                printf("%d", mat[i][j]);
            }
        }
    }
    printf("\n");
    printf("Os numeors acima da diagonal:\n");
     for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            if(i<j){
                printf("%d", mat[i][j]);
            }
        }
    }
    printf("\n");
    printf("Os numeros abaixo da diagonal:\n");
     for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            if(i>j){
                printf("%d", mat[i][j]);
            }
        }
    }
    getch();
}
