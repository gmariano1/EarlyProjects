#include<stdio.h>
#include<stdlib.h>

typedef struct arvore_bin {
    int valor;
    struct arvore_bin *esq;
    struct arvore_bin *dir;
}no;
void inserirNo(no **raiz, int elemento){
    if(*raiz == NULL){
        no *aux = (no *)malloc(sizeof(no));
        aux->valor = elemento;
        aux->dir = aux->esq = NULL;
        *raiz = aux;
        printf("Elemento inserido com sucesso !!\n");
        return;
    }
    if(elemento < (*raiz)->valor){
        inserirNo(&(*raiz)->esq, elemento);
        return;
    }
    if(elemento > (*raiz)->valor){
        inserirNo(&(*raiz)->dir, elemento);
        return;
    }
    printf("O elemento %d já existe na arvore.\n", elemento);
}
no *DoisFilhos(no *root){
    if(root == NULL){
        return NULL;
    }
    else if(root->esq == NULL){
        return root;
    }
    else
        return DoisFilhos(root->esq);

}
void removerNo(no **raiz, int elemento){
    if(elemento < (*raiz)->valor){
        removerNo(&(*raiz)->esq, elemento);
    }
    else if(elemento > (*raiz)->valor){
        removerNo(&(*raiz)->dir, elemento);
    }
    else if((*raiz)->esq != NULL && (*raiz)->dir != NULL){
        no *aux = NULL;
        aux = DoisFilhos((*raiz)->dir);
        (*raiz)->valor = aux->valor;
        removerNo(&(*raiz)->dir, (*raiz)->valor);
    }
    else{
        no *aux = (*raiz);
        if((*raiz)->esq == NULL){
            (*raiz) = (*raiz)->dir;
        }
        else{
            (*raiz) = (*raiz)->esq;
        }
        free(aux);
    }
}
void pesquisaOrdemSimetrica(no *raiz){
    if(raiz == NULL)
        return;
    pesquisaOrdemSimetrica(raiz->esq);
    printf("%d\n", raiz->valor);
    pesquisaOrdemSimetrica(raiz->dir);
}
void pesquisaPosOrdem(no *raiz){
    if(raiz == NULL)
        return;
    pesquisaPosOrdem(raiz->esq);
    pesquisaPosOrdem(raiz->dir);
    printf("%d\n", raiz->valor);
}
void pesquisaPreOrdem(no *raiz){
    if(raiz == NULL)
        return;
    printf("%d\n", raiz->valor);
    pesquisaPreOrdem(raiz->esq);
    pesquisaPreOrdem(raiz->dir);
}

int main(){
    no *raiz = NULL;
    inserirNo(&(raiz), 10);
    inserirNo(&(raiz), 12);
    inserirNo(&(raiz), 9);
    pesquisaOrdemSimetrica(raiz);
    printf("\n");
    pesquisaPreOrdem(raiz);
    printf("\n");
    pesquisaPosOrdem(raiz);


    return 0;
}
