#include <stdio.h>
#include <conio.h>

int quociente(int x/*4*/, int y/*2*/){
    if(x < y){
        return 0;
    }
    return 1 + quociente(x-y, y);
}
void main(){
    int x, y;
    printf("Informe dois numeros: ");
    scanf("%d%d", &x, &y);
    int res = quociente(x, y);
    printf("%d", res);

    getch();
}