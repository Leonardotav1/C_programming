#include<stdio.h>
#include<conio.h>

int trimestre(int n){
    if(n<= 3 && n>1){
        n = 1;
    }
    else if(n>3 && n<6){
        n = 2;
    }
    else if(n>6 && n<9){
        n = 3;
    }
    else{
        n = 4;
    }
    return n;
}

void main(){
    int num;
    printf("Informe um numero entre 1 e 12:");
    scanf("%d", &num);
    int trim = trimestre(num);
    printf("O mes %d pertence ao %d trimestre", num, trim);
    getch();
}