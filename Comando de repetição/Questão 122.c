#include <stdio.h>
#include <conio.h>

void main(){
        int num,k,fibonacci=1,soma=0,contador=0;
        printf("Informe um numero:");
        scanf("%d", &num);
        for(k=1;k<=num;k++){
            fibonacci=fibonacci+soma;
            soma=fibonacci-soma;
            if(num == fibonacci){
                contador = 1;
            }
        }
        if(contador == 1){
            printf("O numero pertence a serie de fibonacci");
        }
        else{
            printf("O numero nao pertence a serie de fibonacci");
        }
        getch();
}