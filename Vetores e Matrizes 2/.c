#include <stdio.h>
#include <conio.h>
const int TAMANHO=10;

void main(){
    int vet[TAMANHO],k,j;
    printf("Lendo o vetor:\n");
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d",&vet[k]);
    }
    int menor=vet[0];
    for(j=0;j<TAMANHO;j++){
        for(k=j;k<TAMANHO;k++){
            if(vet[k]<menor){
                menor=vet[k];
            }
        }
        vet[j]=menor;
    }
    printf("O vetor apos a ordenacao:\n");
    for(k=0;k<TAMANHO;k++){
        printf("%d",vet[k]);
    }
    getch();
}