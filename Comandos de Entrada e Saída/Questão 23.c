#include <stdio.h>
#include <conio.h>
const float pi = 3.14;

void main(){
    float raio;
    printf("Informe o valor do raio:");
    scanf("%f", &raio);
    float multiplicacao = (4*pi)*raio;
    float volume = multiplicacao/3;
    printf("O volume da esfera eh: %.2f", volume);
    getch();
 
}
