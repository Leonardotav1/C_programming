#include <stdio.h>
#include <conio.h>

int somaAlg(int n){
    if(n<10){
        return n;
    }
    return somaAlg(n%10) + somaAlg(n/10);
}
void main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    int res = somaAlg(n);
    printf("%d", res);

    getch();
}