#include <stdio.h>
#include <conio.h>
const int TAMANHO = 10;

void main(){
    int vet[TAMANHO];
    int k,num;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um número:");
        scanf("%d", &vet[k]);
    }
    printf("Informe um numero entre 1 e 10:");
    scanf("%d", &num);
    for(k=num-1;k<TAMANHO;k++){
        printf("%d ", vet[k]);
    }
    getch();
}