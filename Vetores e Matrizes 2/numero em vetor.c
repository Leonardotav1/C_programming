#include<stdio.h>
#include<conio.h>
const int QUANTIDADE=10;

void main(){
    int vet[QUANTIDADE];
    int k,n,contador=0;
    for(k=0;k<QUANTIDADE;k++){
        printf("informe um numero:");
        scanf("%d",&vet[k]);
    }
    printf("Informe o numero que deseja procurar:");
    scanf("%d", &n);
    for(k=0;k<QUANTIDADE;k++){
        if(n==vet[k]){
            contador=contador+1;
        }
    }
    printf("O numero %d aparece %d vezes", n, contador);
    getch();
}