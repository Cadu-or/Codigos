/* Problem: 1068 - Parenthesis Balance I */

#include <stdio.h>
#include <stdlib.h>

// PILHA
struct data{
    char info;
};

typedef struct data Data;

struct node{
    Data elem;
    struct node *prox;
};

typedef struct node Pilha;

int empilhanovo(Pilha **topo, char novo){
    Pilha *novono;
    
    novono = (Pilha *) malloc(sizeof(Pilha));
    if(novono == NULL){
        return 0;
    }else{
        novono->prox = NULL;
        novono->elem.info = novo;
    
        if(*topo == NULL){
            *topo = novono;

        }else{
            novono->prox = *topo;
            *topo = novono;
        }
        return 1;
    }
}

void desempilha(Pilha **Pil){
    Pilha *aux=*Pil;

    *Pil=aux->prox;
    free(aux);
    aux=NULL;
}

Pilha** cria_inicializa(){
    Pilha **novo;
    novo = (Pilha**) malloc(sizeof(Pilha*));
    return novo;
}

void zerapilha(Pilha **topo){

    while(*topo != NULL){
        desempilha(topo);
    }
    *topo = NULL;
}

int main(){
    Pilha **pilha;
    
    int deuruim = 0, j=0;
    char strin[10000];

    pilha = NULL;
    pilha = cria_inicializa();
    
    while(scanf("%s", strin) != EOF){
        deuruim = 0;
        for(j=0; strin[j] != '\0'; j++){
            if(strin[j] == '('){
                empilhanovo(pilha, '(');

            }else if(strin[j] == ')'){
                if(*pilha == NULL){
                    deuruim = 1;
                    break;
                }else{
                    desempilha(pilha);
                }
            }
        }
        if(*pilha == NULL){
            if(deuruim == 0){
                printf("correct\n");
            }else{
                printf("incorrect\n");
            }
        }else{
            printf("incorrect\n");
        }
        zerapilha(pilha);
    }
    
    return 0;
}
