#include <stdio.h>
#include <conio.h>
const int TAMANHO=5;

void main(){
    int vet1[TAMANHO], vet2[TAMANHO],k, vet3[TAMANHO*2], repeticoes, i, teste_valor=0;
    printf("Preenchendo o primeiro vetror:\n");//1 2 3 4 5
    for(k=0;k<TAMANHO;k++){
        printf("informe um numero:");
        scanf("%d",&vet1[k]);
    }
    printf("\nPreenchendo o segundo vetor:\n");//6 7 8 9 10
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d",&vet2[k]);
    }
    for(k=0/*3*/; k<TAMANHO/*5*/; k++){
        repeticoes=0;
        for(i=0/*3*/; i<teste_valor/*3*/; i++){
            if(vet1[k]==vet3[i]){
                vet3[i]=vet1[k];
                repeticoes++;
            }
        }
        if(repeticoes==0){
            vet3[teste_valor]=vet1[k];//1 2 3 4 5
            teste_valor++;
        }
    }
    for(k=0; k<TAMANHO; k++){
        repeticoes=0;
        for(i=0; i<teste_valor; i++){
            if(vet2[k]==vet3[i]){
                vet3[i]=vet2[k];
                repeticoes++;
            }
        }
        if(repeticoes==0){
            vet3[teste_valor]=vet2[k];
            teste_valor++;
        }
    }
    for(k=0; k<teste_valor; k++){
        printf("%d ", vet3[k]);
    }

}