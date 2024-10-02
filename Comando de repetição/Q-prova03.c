#include <stdio.h>
#include <conio.h>

void main(){
    int n1,n2,n3,num_div=2,mmc=1,cont=0;
    printf("Informe 3 numeros:");
    scanf("%d%d%d",&n1,&n2,&n3);
    while(n1>1 || n2>1 || n3>1){
        if(n1%num_div==0){
            n1=n1/num_div;
            cont++;
        }
        if(n2%num_div==0){
            n2=n2/num_div;
            cont++;
        }
        if(n3%num_div==0){
            n3=n3/num_div;
            cont++;
        }
        if(cont>=1){
            mmc=mmc*num_div;
        }
        else{
            num_div++;
        }
        cont=0;
    }
    printf("O mmc eh %d",mmc);
    getch();
}