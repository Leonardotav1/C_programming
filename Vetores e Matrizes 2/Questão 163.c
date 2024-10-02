#include <stdio.h>
#include <conio.h>
#include <string.h>
const int TAMANHO = 10;

void main(){
    int k,acertos,numcandidatos=0,somaPerc=0;
    char gabarito[TAMANHO], candidato[TAMANHO], nome[50],contador=0;
    printf("Lendo o cartao de respostas\n");
    for(k=0;k<TAMANHO;k++){
        fflush(stdin);
        printf("Questao %d:",k+1);
        scanf("%c",&gabarito[k]);
    }
    
    do{
        fflush(stdin);
        printf("\nInforme seu nome:\n");
        gets(nome);
        if(strcmp(nome,"fim") == 1){
            printf("Lendo o seu gabarito\n");
            for(k=0;k<TAMANHO;k++){
                fflush(stdin);
                printf("Questao %d:",k+1);
                scanf("%c",&candidato[k]);
                if(candidato[k]==gabarito[k]){
                    contador++;
                }
            }
            acertos=(contador*100)/TAMANHO;
            printf("O seu percentual de acertos foi %d por cento\n",acertos);
            numcandidatos++;
            somaPerc=somaPerc+contador;
        }
        contador=0;

    }
    while(strcmp(nome,"fim") != 0);
    float media = somaPerc/numcandidatos;
    printf("A media de todos os candidatos foi %.2f",media);
    
}
