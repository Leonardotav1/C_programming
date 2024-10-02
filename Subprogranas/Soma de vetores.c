#include<stdio.h>
#include<conio.h>
const int TAMANHO=5;

void lerVetor(int vet[], int quantidade){
    int k;
    for(k=0;k<quantidade;k++){
        printf("Informe um numero:");
        scanf("%d", &vet[k]);
    }
}
void imprimirVetor(int vet[], int quantidade){
    int k;
    for(k=0;k<quantidade;k++){
        printf("%d ", vet[k]);
    }
}
void somarVetores(int vet1[], int vet2[], int vetSoma[], int quantidade){
    int k;
    for(k=0;k<quantidade;k++){
        vetSoma[k]=vet1[k] + vet2[k];
    }
}
void main(){
    int vet1[TAMANHO], vet2[TAMANHO],vetSoma[TAMANHO];
    printf("Lendo o primeiro vetor:\n");
    lerVetor(vet1,TAMANHO);
    printf("\nLendo o segundo Vetor:\n");
    lerVetor(vet2,TAMANHO);
    somarVetores(vet1,vet2,vetSoma,TAMANHO);
    printf("\nO primeiro vetor:\n");
    imprimirVetor(vet1,TAMANHO);
    printf("\nO segundo vetor:\n");
    imprimirVetor(vet2,TAMANHO);
    printf("\nA soma dos dois vetores;\n");
    imprimirVetor(vetSoma,TAMANHO);
    getch();
}