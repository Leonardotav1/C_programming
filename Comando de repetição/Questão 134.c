#include <stdio.h>
#include <conio.h>

void main(){
    /*int N,k;
    printf("Informe o numero desejado:");
    scanf("%d", &N);
    while(N>=1){
        for(k=N;k>=1;k--){
            printf("*");
        }
        printf("\n");
        N--;
    }*/

   int k, n, i, j;
   printf("Informe o numero desejado: ");
   scanf("%d", &n);
    for(k=n; k>=1; k--){
        for(j=0;j<n-1;j++){
            for(i=1; i<=k; i++){
                printf("*");
            }
            printf("\n");
        }
    }
    getch();
}