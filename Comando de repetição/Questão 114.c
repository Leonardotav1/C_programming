#include <stdio.h>
#include <conio.h>

void main(){
    int m,n,k,aux=1,produto;
    printf("Informe o valor de M e N (M^n):");
    scanf("%d%d",&m,&n);
    if(n==0){
        printf("O resultado eh: 1");
    }
    else {for(k=1;k<=n;k++){
        produto=aux*m;
        aux=produto;
    }
    printf("O resultado eh: %d",produto);
    getch();
    }
}