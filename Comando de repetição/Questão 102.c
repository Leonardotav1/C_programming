#include<stdio.h>
#include<conio.h>

void main(){
    int num,k;
    printf("Informe um numero inteiro:");
    scanf("%d", &num);
    for(k=1;k<=num;k++){
        if(num%k == 0){
            printf("%d\n", k);
        }
    }
    getch();
}