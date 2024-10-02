#include <stdio.h>
#include <conio.h>

void bin(int n/*1*/){
    if(n == 0){
        printf("0");
    }
    if(n == 1){
        printf("1");/*1*/
    }
    else{
        bin(n/2);/*10 5 2 1 - 0 1 0 1*/
        printf("%d", n%2);/*1010*/
    }
}
void main(){
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d", &n);
    bin(n);

    getch();
}