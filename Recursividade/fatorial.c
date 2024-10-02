#include<stdio.h>
#include<conio.h>

int fatorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fatorial(n-1);
}

void main(){
    int num;
    printf("Informe um numero:");
    scanf("%d", &num);
    int fat=fatorial(num);
    printf("O fatorial de %d eh %d", num, fat);
    getch();
}