#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;

void main(){
    int vet[QUANTIDADE];
    int k;
    for(k=0;k<QUANTIDADE;k++){
        printf("Informe um numero:");
        scanf("%d", &vet[k]);
    }
    printf("Os numeros inversos sao:");
    for(k=QUANTIDADE-1;k>=0;k--){
        printf("%d ", vet[k]);
    }
    getch();
}