#include <stdio.h>
#include <conio.h>
const int TAMANHO = 10;

void main(){
    int vet[TAMANHO];
    int k,num;
    printf("Preenchendo o vetor:\n");
    for(k=0;k<TAMANHO;k++){
        printf("Informe um numero:");
        scanf("%d", &vet[k]);
    }
    printf("Informe o numero que deseja procurar no vetor:");
    scanf("%d", &num);
    for(k=0;k<TAMANHO;k++){
        if(num == vet[k]){
            printf("%d ",vet[k]);
        }
    }
    getch();
}