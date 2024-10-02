#include <stdio.h>
#include <conio.h>
const int TAMANHO = 10;

void main(){
    int vet[TAMANHO],k,m,n,aux;
    printf("Prenchendo o vetor:\n");
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero inteiro:");
        scanf("%d",&vet[k]);
    }
    printf("\n Informe dois numeros entre 1 e 10:");
    scanf("%d%d",&m,&n);
    aux=vet[m-1];
    vet[m-1]=vet[n-1];
    vet[n-1]=aux;
    for(k=0;k<TAMANHO;k++){
        printf("%d ",vet[k]);
    }
    getch();
}