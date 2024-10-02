#include <stdio.h>
#include <conio.h>

void main(){
    int m,n,k,j,contador=0;
    printf("Informe o intervalo [m,n]:");
    scanf("%d%d", &m,&n);
    for(k=m;k<=n;k++){
        for(j=1;j<=k;j++){
            if(k % j == 0){
                contador++;
            }      
        }
        if(contador == 2){
            printf("%d ",k);
        }
        contador=0;
    }
    getch();
}2