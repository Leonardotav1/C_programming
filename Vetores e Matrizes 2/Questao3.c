#include<stdio.h>
#include<conio.h>
const int ORDEM=3;

void main(){
    int mat[ORDEM][ORDEM];
    int i,j,n;
    int vezes=0;
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
    printf("Informe o numero que deseja procurar:");
    scanf("%d", &n);
    for(i=0;i<ORDEM;i++){
        for(j=0;j<ORDEM;j++){
        }
        if(n == mat[i][j]){
                vezes=vezes+1;
            }
    }
    printf("O numero %d aparece %d vezes", n, vezes);
}
