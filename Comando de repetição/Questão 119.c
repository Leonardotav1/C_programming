#include <stdio.h>
#include <conio.h>

void main(){
    int fibonacci=1,soma=1,num;
    printf("Informe o termo:");
    scanf("%d",&num);
    while(soma<=num){
        fibonacci=fibonacci+soma;
        soma=fibonacci-soma;
        if(soma<=num){
            printf("%d ",soma);
        }
    }
    getch();

}