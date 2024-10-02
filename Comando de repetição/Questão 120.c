#include <stdio.h>
#include <conio.h>

void main(){
    int N,soma=0,num=1;
    printf("Informe o numero:");
    scanf("%d",&N);
    printf("Os numeros cuja a soma e menor ou igua a %d sao:\n",N);
    while(soma + num<=N){
        printf("%d ",num);
        soma=soma+num;
        num++;
    }
    getch();
}