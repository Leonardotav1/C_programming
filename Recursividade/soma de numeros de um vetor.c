#include<stdio.h>
#include<conio.h>
const int quantidade=10;

int soma(int vet[], int quantidade, int n){
    if (n==quantidade-1){
        return vet[n];
    }
    return vet[n] + soma(vet,quantidade,n+1);
}

void main(){
    int vet[quantidade], num;
    int k;
    printf("Preenchendo o vetor:\n");
    for(k=0; k<quantidade;k++){
        printf("Informe um numero:");
        scanf("%d", &vet[k]);
    }

    printf("Informe um numero entre 0 e 9:");
    scanf("%d", &num);
    int som = soma(num, quantidade, vet);
    printf("A soma a partir da posição %d eh %d", num, som);
    getch();
}