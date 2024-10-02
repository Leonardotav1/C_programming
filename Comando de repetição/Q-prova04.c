#include <stdio.h>
#include <conio.h>

void main(){
    int num, k, primo=2;
    printf("Informe um numero: ");
    scanf("%d", &num);
    int decomp=num;
    while(decomp>1){
        int divisor_cont=0;
        for(k=1; k<=primo; k++){
            if(primo%k==0){
                divisor_cont++;
            }
        }
        if(divisor_cont==2){
            if(decomp%primo==0){
                while(decomp%primo==0){
                    decomp=decomp/primo;
                    printf("%d ", primo);   
                }  
            }
        }
        primo++;
    }
}