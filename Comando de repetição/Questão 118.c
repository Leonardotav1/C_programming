#include <stdio.h>
#include <conio.h>

void main(){
    int n,contador=0,k;
    printf("Informe a quantidade de numeros primos:");
    scanf("%d",&n);
    int numPrimos = 0;
    int numero = 2;
    while (numPrimos<n){
        for(k=1;k<=numero;k++){
            if(numero % k == 0){
                contador++;
            }
        }
        if(contador == 2){
            printf("%d ",numero);
            numPrimos++;
        }
        contador=0;
        numero++;
    }
    getch();
    
}