#include<stdio.h>
#include<conio.h>
const int Tamanho=10;

int ComprararVet(int vet1[], int vet2[], int quantidade, int n){
    if (n>=quantidade){
        return 1;
    }
    if(vet1[n]!=vet2[n]){
        return 0;
    }
    return ComprararVet(vet1, vet2, quantidade, n+1); 
}

void main(){
    int vet1[Tamanho], vet2[Tamanho], num, k;
    printf("Preenchendo o primeiro vetor:\n");
    for(k=0;k<Tamanho;k++){
        printf("Informe um numero:");
        scanf("%d", &vet1[k]);
    }
    printf("Preenchendo o segundo vetor:\n");
    for(k=0;k<Tamanho;k++){
        printf("Informe um numero:");
        scanf("%d", &vet2[k]);
    }
    printf("Informe a posicao que deseja verificar:");
    scanf("%d", &num);
    int comparacao = ComprararVet(vet1,vet2,Tamanho,num);
    if (comparacao==0){
        printf("os vetores nao sao iguais a partir da posicao %d", num);
    }
    else if (comparacao==1){
        printf("Os vetores sao iguais a partir da posicao %d", num);
    }
}
