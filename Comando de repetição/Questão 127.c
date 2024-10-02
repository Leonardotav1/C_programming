#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    char palavra[50];
    int contador=0;
    do{
        fflush(stdin);
        printf("Informe uma palavra:\n");
        gets(palavra);
        int tamanho = strlen(palavra);
        printf("A palavra %s tem %d letras\n",palavra,tamanho);
        if(tamanho==5){
            contador++;
        }
    }
    while(contador<2);
}
