#include <stdio.h>
#include <conio.h>

void main(){
    int m,n,k,soma=0,contador=0;
    printf("Informe os dois numeros:");
    scanf("%d%d", &m,&n);
    for(k=m;k<=n;k++){
        soma = soma+k;
        contador++;
    }
    int media = soma/contador;
    printf("A media eh %d", media);
    getch();
}