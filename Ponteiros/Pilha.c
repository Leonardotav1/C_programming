#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct nodo{
    int numero;
    struct nodo*proximo;
}Nodo;

typedef struct{
    Nodo*topo;
}Pilha;

Pilha *criarPilha(){
    Pilha*P = (Pilha*)malloc(sizeof(Pilha));
    P->topo=NULL;
    return P;
}

void push(Pilha *pilha, int n){
    Nodo *novo=(Nodo*)malloc(sizeof(Nodo));
    novo->numero=n;
    novo->proximo=pilha->topo;
    pilha->topo=novo;
}

int pop(Pilha *Pilha){
    Nodo *aux=Pilha->topo;
    int resultado=aux->numero;
    Pilha->topo=aux->proximo;
    free(aux);
    return resultado;
}

int estaVazia(Pilha*pilha){
    if(pilha->topo == NULL){
        return 1;
    }
    return 0;
}

void main(){
    int n;
    Pilha *pilha=criarPilha();
    printf("Informe um numero:");
    scanf("%d", &n);
    while(n!=0){
        push(pilha, n);
        printf("Informe outro numero:");
        scanf("%d",&n);
    }
    printf("Os numeros informados foram:\n");
    while(estaVazia(pilha)==0){
        n = pop(pilha);
        printf("%d",n);
    }
    getch();
}