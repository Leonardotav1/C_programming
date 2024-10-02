#include <stdio.h>
#include <conio.h>

void pularLinhas(int n){
    if(n>0){
        pularLinhas(n-1);
        printf(".\n");
    }
}

void main(){
    int num;
    printf("Informe um numero inteiro:");
    scanf("%d",&num);
    pularLinhas(num);
    getch();
}