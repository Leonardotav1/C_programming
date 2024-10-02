#include <stdio.h>
#include <conio.h>
const int TAMANHO=10;

void main(){
    int vet[TAMANHO],k,aux;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d",&vet[k]);
    }
    for(k=0;k<TAMANHO/2;k++){
        aux=vet[k];
        vet[k]=vet[TAMANHO-1-k];
        vet[TAMANHO-1-k]=aux;
    }
    for(k=0;k<TAMANHO;k++){
        printf("%d ",vet[k]);
    }
    getch();
}