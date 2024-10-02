#include <stdio.h>
#include <conio.h>

int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

void main(){
    int n;
    printf("Informe um numero:");
    scanf("%d",&n);
    int fib = fibonacci(n);
    printf("O enesimo termo eh : %d",fib);
    getch();
}