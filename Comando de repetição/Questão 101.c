#include<conio.h>
#include<stdio.h>

void main(){
    int num,k;
    printf("Informe um numero inteiro positivo:");
    scanf("%d", &num);
    for(k=1;k<=num;k++){
        if(k%2 != 0){
            printf("%d\n",k);
        }
    }
    getch();
}