#include <stdio.h>
#include <conio.h>

void main(){
    int valor,cedulas100,cedulas50,cedulas20,cedulas10;
    printf("Informe o valor a ser sacado:");
    scanf("%d", &valor);
    if (valor>1000){
        printf("O valor nao pode ser sacado!\n");
    }
    else if(valor>=100){
        cedulas100 = valor/100;
        printf("%d cedulas de 100\n", cedulas100);   
    }
    valor = valor%100;
    if(valor >= 50){
        cedulas50 = valor/50;
        printf("%d cedulas de 50\n",cedulas50);  
    }
    valor = valor%50;
    if (valor>=20){
        cedulas20 = valor/20;
        printf("%d cedulas de 20\n", cedulas20);
    }
    valor = valor%20;
    if (valor>=10){
        cedulas10 = valor/10;
        printf("%d cedulas de 10\n", cedulas10);
    }    
    getch();
    
}