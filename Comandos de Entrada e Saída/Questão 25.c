#include <stdio.h>
#include <conio.h>

void main(){
    int num,k;
    printf("Informe o numero:");
    scanf("%d", &num);
    for(k=1;k<=10;k++){
        int multiplicacao = num*k;
        printf("%d\n",multiplicacao);
    }
    getch();
}