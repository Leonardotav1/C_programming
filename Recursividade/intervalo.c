#include<stdio.h>
#include<conio.h>

int soma( int min, int max){
    if(min==max){
        return 1;
    }
    return max + soma(min+1, max);
}

void main(){
    int min,max;
    printf("Informe dois numeros:");
    scanf("%d %d", &min, &max);
    int som = soma(min,max);
    printf("O resultado da soma entre %d e %d eh: %d", min, max, som);
    getch();
}