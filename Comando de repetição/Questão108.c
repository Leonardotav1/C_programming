#include <stdio.h>
#include <conio.h>
const int QUANTIDADE = 10;

void main(){
    int num,pt=0,ptb=0,pmdb=0,dem=0,psdb=0,pcdob=0,contador=0;
    while (contador<QUANTIDADE){
        printf("Informe o numero do candidato:");
        scanf("%d", &num);    
        contador++;
        int partido = num/1000;
        if(num>10000 && num<99999){
            switch(partido){
                case 13: pt++;break;
                case 14: ptb++;break;
                case 15: pmdb++;break;
                case 25: dem++;break;
                case 45: psdb++;break;
                case 65: pcdob++;break;
            }
        }
    }
    printf("O partido PT elegeu %d candidatos\n",pt);
    printf("O partido PTB elegeu %d candidatos\n",ptb);
    printf("O partido PMDB elegeu %d candidatos\n",pmdb);
    printf("O partido DEM elegeu %d candidatos\n",dem);
    printf("O partido PSDB elegeu %d candidatos\n",psdb);
    printf("O partido PCdoB elegeu %d candidatos\n",pcdob);
    getch();

}