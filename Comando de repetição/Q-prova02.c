#include <stdio.h>
#include <conio.h>

void main(){
    int saque, cedulas_100=0,cedulas_50=0,cedulas_20=0,cedulas_10=0,soma=0;
    do{
        printf("Informe o valor a ser sacado:");
        scanf("%d",&saque);
        if(saque%10==0 && saque>0){
            soma=soma+saque;
            if(saque>=100){
                cedulas_100=saque/100;
            }
            if(saque>=50){
                cedulas_50=(saque%100)/50;              
            }
            if (saque>=20){
                cedulas_20=((saque%100)%50)/20;
            }
            if(saque>=10){
                cedulas_10=(((saque%100)%50)%20)/10;
            }
            printf("R$100:%d  R$50:%d  R$20:%d  R$10:%d\n",cedulas_100,cedulas_50,cedulas_20,cedulas_10);
        }
        else if(saque%10!=0){
            printf("O valor nao pode ser sacado!\n");
            
        }
    }while(saque!=0);
    printf("O valor total de todos os saques foi %d",soma);
    
    

}