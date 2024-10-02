#include <stdio.h>
#include <conio.h>

void main(){
    int m,n,k,soma=0;
    printf("Informe os dois numeros:");
    scanf("%d%d", &m,&n);
    for(k=m;k<=n;k++){
        soma = soma+k;
    }
    printf("Ah soma eh: %d", soma);
}