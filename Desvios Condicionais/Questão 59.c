#include <stdio.h>
#include <conio.h>

void main(){
    int num1, num2;
    printf("Informe os dois numeros:");
    scanf("%d %d", &num1, &num2);
    if(num2 > num1){
        printf("O numero eh maior");
    }
    else if(num2 < num1){
        printf("O numero eh menor");
    }
    else{
        printf("Os numeros sao iguais");
    } 
    getch();
}