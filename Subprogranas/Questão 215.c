#include<stdio.h>
#include<conio.h>


void main(){
    int distancia; 
    float precogas;
    printf("Quantos quilometros voce ira percorrer:");
    scanf("%d", &distancia);
    printf("Qual o preço da gasolina:");
    scanf("%f", &precogas);
    calculo(distancia, precogas);
    
}

/// @brief 
/// @param distancia 
/// @param gasolina 
/// @return 
void calculo(int distancia, float gasolina){
    float qntgas = (distancia/14)*gasolina;
    printf("Voce ira gastar %.2f reais", qntgas);
}