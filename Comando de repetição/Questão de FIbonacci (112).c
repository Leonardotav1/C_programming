#include <stdio.h>
#include <conio.h>

void main(){
    int num,fibonacci=1,soma=0,k,contador=0;
    printf("Informe o termo que quer saber:");
    scanf("%d", &num);
    for(k=1;k<=num;k++){
        fibonacci = fibonacci+soma;
        soma = fibonacci-soma;
        if(soma==num){
            contador++;
        }
    }
    if(contador>0){
        printf("O numero %d pertence a serie",num);
    }
    else{
        printf("O numero nao pertence a serie");
    }
    getch();
}
