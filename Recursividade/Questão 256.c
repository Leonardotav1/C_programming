#include <conio.h>
#include <stdio.h>
const int ORDEM = 5;

void imprimirDiagonal(float mat[ORDEM][ORDEM], int n){
    if(n == 0){
        printf("%.2f ",mat[n][n]);
    }
    else{
        imprimirDiagonal(mat,n-1);
    printf("%.2f  ",mat[n][n]);
    }
}

void main(){
    int i,j,n;
    float mat[ORDEM][ORDEM];
    printf("Preenchendo a matriz:\n");
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
            printf("Informe um numero:");
            scanf("%f",&mat[i][j]);
        }
        printf("\n");
    }
    printf("Informe um numero entre 1 e 5:");
    scanf("%d",&n);
    imprimirDiagonal(mat,n-1);
    getch();
}
