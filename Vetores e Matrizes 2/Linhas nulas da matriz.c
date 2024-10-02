#include<stdio.h>

const int ORDEM = 3;

int main(){
    int mat[ORDEM][ORDEM];

    //lendo a matriz
    
    for(int i = 0; i < ORDEM; i++){
        for(int j = 0; j < ORDEM; j++){
            printf("Informe um numero:");
            scanf("%d", &mat[i][j]);

        }
    }

    int contador = 0;

    //verificando as linhas da matriz
    for(int i = 0; i < ORDEM; i++){
        int linhaNula = 1;

        for(int j = 0; j < ORDEM; j++){
            if(mat[i][j])
                linhaNula = 0;
        }

        if(linhaNula)
            contador++;
    }
    printf("Quantidade de linhas nulas: %d\n",contador);
}

