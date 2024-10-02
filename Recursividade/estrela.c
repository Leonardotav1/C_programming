#include <stdio.h>

void arvore(int tamanho){
  if(tamanho > 0){
    int estrelas;
    for(estrelas = 1; estrelas <=tamanho; estrelas++){
      printf("*");
    }
    printf("\n");
    arvore(tamanho-1);
  }
}
  
void main() {
  int tamanho;
  printf("Digite o tamanho: ");
  scanf("%d",&tamanho);
  arvore(tamanho);
}