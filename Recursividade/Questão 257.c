#include <stdio.h>
#include <conio.h>

int potenciacao(int base/*2*/, int expo/*3*/){
    if(expo==0){
        return 1;
    }
    else{
        return base * potenciacao(base, expo-1);
    }
    
}
void main(){

    int base, expo;
    printf("Informe ua base e o expoente: ");
    scanf("%d%d", &base, &expo);
    int res = potenciacao(base, expo);
    printf("%d", res);

    getch();

}