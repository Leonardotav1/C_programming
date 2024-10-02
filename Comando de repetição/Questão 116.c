#include <stdio.h>
#include <conio.h>
#include <string.h>
const int PESSOAS=20;

void main(){
    char nome[20];
    char sexo;
    int idade,k,contador;
    for(k=1;k<=PESSOAS;k++){
        printf("Informe seu nome:");
        gets(nome);
        fflush(stdin);
        printf("Informe seu sexo (M ou F):");
        scanf("%c",&sexo);
        printf("Informe sua idade:");
        scanf("%d",&idade);
        if(sexo == 'F' && idade>18 && idade<21){
            contador++;
        }
        nome[0] = '\0';
    }
    int percentual = (contador*100)/PESSOAS;
    printf("%d%% das mulheres tem entre 18 e 21 anos",percentual);
    getch();
}