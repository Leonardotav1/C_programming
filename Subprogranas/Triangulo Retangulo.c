#include<stdio.h>
#include<conio.h>

void verificacao(int ang1, int ang2, int ang3){
    if (ang1==90 || ang2==90 || ang3==90 ){
        printf("O triangulo eh retangulo");
    }
    else{
        printf("O triangulo nao eh retangulo");
    }
    
}


int main(void){
    int ang1, ang2, ang3;
    printf("Informe a medida dos angulos;");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    verificacao(ang1, ang2, ang3);
    getch();
    return 0;
}