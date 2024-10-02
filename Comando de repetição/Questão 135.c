#include<stdio.h>
#include<conio.h>
const int eleitores=10;

void main(){
    int k,voto;
    int Joao=0, Ze=0, Maria=0, Ana=0, nulo=0;
    for(k=1;k<=eleitores;k++){
        printf("Insira seu voto:");
        scanf("%d", &voto);
        if (voto==1){
            Joao++;
        }
        else if(voto==2){
            Ze++;
        }
        else if(voto==3){
            Maria++;
        }
        else if(voto==4){
            Ana++;
        }
        else{
            nulo++;
        }
        voto=0;
    }
    float percent1 = ((float)Joao/eleitores)*100;
    float percent2 = ((float)Ze/eleitores)*100;
    float percent3 = ((float)Maria/eleitores)*100;
    float percent4 = ((float)Ana/eleitores)*100;
    float percentNulo = ((float)nulo/eleitores)*100;

    printf("Joao Borracheiro teve %d votos, um percentual de %.2f\n",Joao, percent1 );
    printf("Ze do Caminhao teve %d votos, um percentual de %.2f\n",Ze,percent2);
    printf("Maria da bodega teve %d votos, um percentual de %.2f\n",Maria,percent3);
    printf("Ana teve %d votos, um percentual de %.2f\n",Ana,percent4);
    printf("Os votos nulos foram %d, um percemtual de %.2f\n",nulo,percentNulo);
    getch();
}