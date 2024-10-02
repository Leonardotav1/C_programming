#include<stdio.h>
#include<conio.h>
const int quantidade=5;

void main(){
    int vetA[quantidade], vetB[quantidade];
    int k,j;
    int aparece=1;
    for(k=0;k<quantidade;k++){
        printf("Informe um numero:");
        scanf("%d", &vetA[k]);
    }
    for(j=0;j<quantidade;j++){
        printf("Informe um numero:");
        scanf("%d", &vetB[k]);
    }
    for(k=0;k<quantidade;k++){
        aparece=0;
        for(j=0;j<quantidade;j++){
            if(vetA[k]==vetB[j]){
                aparece=1;
                break;
            }
        }
        if(aparece==0){
            printf("%d", vetA[k]);
        }
    }
}