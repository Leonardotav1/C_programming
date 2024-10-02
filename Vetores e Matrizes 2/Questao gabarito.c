#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10; 

void main(){
    char gabarito[QUANTIDADE], resposta[QUANTIDADE]; 
    int k;
    int contador=0;
    printf("Lendo o gabarito:\n");
    for(k=0;k<QUANTIDADE;k++){
        printf("Informe a resposta da questao:");
        fflush(stdin);
        scanf("%c", &gabarito[k]);
    }
    printf("Lendo o cartao de respostas:\n");
    for(k=0;k<QUANTIDADE;k++){
        printf("Informe as respostas da sua prova:");
        fflush(stdin);
        scanf("%c", &resposta[k]);
    }
    for(k=0;k<QUANTIDADE;k++){
        if(resposta[k]==gabarito[k]){
            contador=contador+1;
        }
    }
    printf("Voce acertou %d questoes", contador);
}