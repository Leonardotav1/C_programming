#include <stdio.h>
#include <conio.h>
const int TAMANHO=10;

void main(){
    int vet[TAMANHO],k,num,resto,cont_div=0;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    for(k=0;k<TAMANHO;k++){
        if(num>0){
        resto=num%2;
        vet[k]=resto;
        num=num/2;
        cont_div++;
    }
    }
    printf("O numero em binario eh:\n");
    for(k=cont_div-1;k>=0;k--){
        printf("%d",vet[k]);
    }
    getch();
}b