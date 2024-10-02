#include <stdio.h>
#include <conio.h>

int quantidade(int num/*2*/){
  if(num<10){
    return 1;
  }
  return 1 + quantidade(num/10);/*1 + 1 = 2*/
}
void main(){
    int n;
    printf("Informe um numero: ");
    scanf("%d", &n);
    int res = quantidade(n);
    printf("%d", res);

    getch();
}