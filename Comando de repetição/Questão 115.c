#include <stdio.h>
#include <conio.h>
#include <math.h>
const int PESSOAS=3;

void main(){
    int k,acimaPeso=0,idealPeso=0,abaixoPeso=0;
    float peso,altura;
    for(k=1;k<=PESSOAS;k++){
        printf("Informe seu peso e altura:");
        scanf("%f%f", &peso, &altura);
        float percentual = peso/pow(2,altura);

        if(percentual<18){
            abaixoPeso++;
        }
        if(percentual>=18 && percentual<=25){
            idealPeso++;
        }
        if(percentual>25){
            acimaPeso++;
        }
        percentual = 0;
    }

    int percentualAbaixo = (abaixoPeso*100)/PESSOAS;
    int percentualIdeal = (idealPeso*100)/PESSOAS;
    int percentualAcima = (acimaPeso*100)/PESSOAS;
    printf("\n%d%% das pessoas estao abaixo do peso\n",percentualAbaixo);
    printf("%d%% das pessoas estao no peso ideal\n", percentualIdeal);
    printf("%d%% das pessoas estao acima do peso\n",percentualAcima);
}