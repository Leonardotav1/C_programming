#include <stdio.h>
const int TAMANHO = 5;

void main(){
    int vet[TAMANHO];
    int k,n;
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d", &vet[k]);
    }
    printf("Informe uma posicao entre 1 e %d:", TAMANHO);
    scanf("%d", &n);
    if(n>=1 && n<=TAMANHO){
        int resposta = vet[n-1];
        printf("O %d numero informado foi %d",n,resposta);
    }
    else{
        printf("Posicao inválida");
    }

}