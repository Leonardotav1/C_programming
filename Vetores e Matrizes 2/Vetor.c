#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=5;

void main(){
    int vet[QUANTIDADE];
    int k;
    for(k=0;k<QUANTIDADE;k++){
        printf("Informe um numero inteiro:");
        scanf("%d", &vet[k]);
    }
    printf("Os numeros informados foram:\n");
    for(k=0;k<QUANTIDADE;k++){
        printf("%d ", vet[k]);
    }
    getch();
}