#include<stdio.h>
#include<conio.h>

int soma(int m, int n){
    if(m==n){
        return 1;
    }
    return n+soma(n+1,m);
}

void main(){
    int min, max;
    printf("Digite um min:");
    scanf("%d",&min);
    printf("Digite um max:");
    scanf("%d",&max);
    int somaInteiro = soma(min,max);
    printf("A soma dos numeros entre %d e %d eh %d", min, max, somaInteiro);
    getch();
}