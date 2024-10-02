#include <stdio.h>
#include <conio.h>
const int QUANTIDADE = 10;

void main(){
    int k,num,fatorial=1,j;
    for(k=1;k<=QUANTIDADE;k++){
        printf("Informe um numero:");
        scanf("%d",&num);
        for(j=num;j>=1;j--){
            fatorial=fatorial*j;
        }
        printf("O fatorial de %d eh %d\n",num,fatorial);
        fatorial=1;
    }
    getch();
}