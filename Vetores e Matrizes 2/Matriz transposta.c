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
    printf("A matriz transposta:\n");
    for(j=0;j<ORDEM;j++){
        for(i=0;i<ORDEM;i++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    getch();
}