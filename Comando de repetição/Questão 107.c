#include <stdio.h>
#include <conio.h>
 
void main(){
    int m,n,k,j,soma=0,contador=0,contador2=0;
    printf("Informe os dois numeros:");
    scanf("%d%d", &m,&n);
    for(k=m;k<=n;k++){
        for(j=1;j<=k;j++){
            if(k % j == 0){
                contador++;  
            }    
        }
        if(contador == 2){ 
            soma = soma+k; 
            contador2++;
        }
        contador=0;
    }
    int media = soma/contador2;
    printf("A media eh %d", media);
    getch();
}