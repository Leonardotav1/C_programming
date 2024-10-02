#include<stdio.h>
#include<conio.h>

int quantidade( int n){
    if(n < 10 || n < -10){
        return 1;
    }
    return 1 + quantidade(n/10);
}

void main(){
    int num;
    printf("Informe um numero:");
    scanf("%d", &num);
    int quant=quantidade(num);
    printf("O numeros %d tem %d algarismos", num, quant);
    getch();
}