#include <stdio.h>
#include <conio.h>

void main(){
    int num, termo, razao, contador=0;
    printf("Informe o numero que deseja saber:");
    scanf("%d",&num);
    printf("Informe o termo inicial e a razao:");
    scanf("%d%d",&termo,&razao);
    while(termo<=num){
        termo=termo+razao;
        if(termo==num){
            contador++;
        }
    }
    if(contador==1){
        printf("O numero %d pertence a progressao",num);
    }
    else{
        printf("O numero %d nao pertencie a progressao",num);
    }
    getch();
}