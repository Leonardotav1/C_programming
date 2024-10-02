#include <stdio.h>
#include <conio.h>

void main(){
    int m,n,x,k,numDivisores;
    printf("Informe o intervalo [m,n]:");
    scanf("%d%d", &m,&n);
    printf("Informe o numero que deseja saber os divisores:");
    scanf("%d", &x);
    for(k=m;k<=n;k++){
        if(x%k == 0){
            numDivisores++;
        }
    }
    printf("O numero %d tem %d divisores no intervalo [m,n]",x,numDivisores);
    getch();    
}