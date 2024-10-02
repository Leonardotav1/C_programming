#include <stdio.h>
#include <conio.h>

void main(){
    int k,milhar,centena,dezena,unidade;
    for(k=1000;k<=9000;k++){
        milhar=k/1000;
        centena=(k%1000)/100;
        dezena=((k%1000)%100)/10;
        unidade=k%10;
        if(milhar==unidade && centena==dezena){
            printf("%d ",k);
        }
    }
    getch();
}