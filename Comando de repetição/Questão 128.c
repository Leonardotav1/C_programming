#include <stdio.h>
#include <conio.h>
#include <string.h>
const int QUANTIDADE=5;

void main(){
    char nome_boi[50];
    int peso,k;
    printf("Informe o nome:");
    gets(nome_boi);
    printf("Informe o peso do boi:");
    scanf("%d",&peso);
    int peso_min=peso;
    int peso_max=peso;
    char boi_leve[50]; 
    char boi_pesado[50]; 
    for(k=1;k<QUANTIDADE;k++){
        fflush(stdin);
        printf("Informe o nome do boi:");
        gets(nome_boi);
        printf("Informe o peso do boi:");
        scanf("%d",&peso);
        if(peso<peso_min){
            peso_min=peso;
            strcpy(boi_leve,nome_boi);
        }
        else if(peso>peso_max){
                peso_max=peso;
                strcpy(boi_pesado,nome_boi);
            }
    }
    printf("O boi mais leve eh %s e o boi mais pesado eh %s",boi_leve,boi_pesado);
}