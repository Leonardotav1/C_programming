#include <stdio.h>
#include <conio.h>

void main(){
    int num1, num2, num3;
    printf("Informe os 3 numeros:");
    scanf("%d%d%d", &num1, &num2, &num3);
    int maiorNum = num1;
    if(num1<num2){
        maiorNum=num2;
    }
    if (num2<num3){
        maiorNum=num3;
    }
    printf("O maior numero eh %d", maiorNum);
    getch();
}