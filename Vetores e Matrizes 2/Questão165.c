#include <stdio.h>
#include <conio.h>
const int TAMANHO=5;

void main(){
    int vetA[TAMANHO], vetB[TAMANHO],vetC[TAMANHO];
    int k,i,cont=0,teste_valor=0;
    for(k=0;k<TAMANHO;k++){
        printf("Informe:");
        scanf("%d",&vetA[k]);
    }
    printf("Segundo vetor\n");
    for(k=0;k<TAMANHO;k++){
        printf("Informe:");
        scanf("%d",&vetB[k]);
    }
    for(k=0;k<TAMANHO;k++){
        for(i=0;i<TAMANHO;i++){
            if(vetA[k] == vetB[i]){
                cont++;
            }   
        }
        if(cont != 0){
            vetC[teste_valor]=vetA[k];
            teste_valor++;
        }
        cont = 0;
    }
    for(k=0;k<teste_valor;k++){
        printf("%d",vetC[k]);
    }
    getch();
}