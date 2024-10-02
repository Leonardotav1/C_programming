#include <stdio.h>
#include <conio.h>

void main(){
    int num;
    printf("Digite um numero entre 1 e 12:");
    scanf("%d", &num);
    if (num>=1 && num<=3){
        printf("Pertence ao primeiro trimestre");
    }
    if (num>3 && num<=6){
        printf("Pertence ao 2 trimestre");
    }
    if (num>6 && num<=9){
        printf("Pertence ao 3 trimestre");
    }
    if (num>9){
        printf("Pertence ao 4 trimestre");
    }
    getch();
}