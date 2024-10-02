#include<stdio.h>
#include<conio.h>

void main(){
    int num,k,contador=0;
    printf("Informe um numero:");
    scanf("%d", &num);
    for(k=1;k<=num;k++){
        if(num % k == 0){
            contador++;
        }
    }
    if(contador == 2){
        printf("O numero eh primo!");
    }
    else{printf("Nao eh primo");
    }
    getch();
}

