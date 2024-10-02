#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int peso, altura;
    printf("Informe seu peso e altura respectivamente:");
    scanf("%d%d", &peso, &altura);
    int imc = peso/pow(2, altura); 
    printf("O seu imc eh %d\n", imc);
    if (imc<18){
        printf("Voce esta abaixo do peso");
    }
    if (imc>=18 && imc<=25){
        printf("Voce esta no peso ideal");
    }
    if (imc>25){
        printf("Voce esta acima do peso");
    }
    getch();
}