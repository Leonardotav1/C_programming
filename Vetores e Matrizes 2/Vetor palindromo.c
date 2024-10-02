#include <stdio.h>
#include <string.h>
#include <conio.h>
const int TAMANHO=10;

void main(){
    char vet[TAMANHO];
    int k,contador=0;
    for(k=0;k<TAMANHO;k++){
        fflush(stdin);
        printf("Informe um caractere:");
        scanf("%c",&vet[k]);
    }
    for(k=0;k<TAMANHO/2;k++){
        if(vet[k]==vet[TAMANHO-1-k]){
            contador++;
        }      
    }
    if(contador==TAMANHO/2){
        printf("o vetor eh palindromo");
    }
    else{
        printf("o vetor nao eh palindromo");
    }
    getch();
}