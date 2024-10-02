#include <stdio.h>
#include <conio.h>

int enesimo(int termo, int razao, int n){
    if(n==1){
        return termo;
    }
    return razao + enesimo(termo,razao,n-1);
}

void main(){
    int termo, razao, num;
    printf("Informe o termo inicial, a razao e o numero que deseja saber:");
    scanf("%d%d%d",&termo,&razao,&num);
    int enesimoNum = enesimo(termo,razao,num);
    printf("O %d numero eh %d",num, enesimoNum);
    getch();
}