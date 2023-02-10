/*
 * Program  : Binary Search Tree Deletion
 * Language : C
 */

#include <stdio.h>
#include <stdlib.h>

struct no{
    int chave;
    struct no *esquerda;
    struct no *direita;
};

struct no *getNovoNo(int val){
    struct no *novoNo = malloc(sizeof(struct no));
    novoNo->chave = val;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

struct no *inserir(struct no *raiz, int val){
    if (raiz == NULL)
        return getNovoNo(val);
    if (raiz->chave < val)
        raiz->direita = inserir(raiz->direita, val);
    else if (raiz->chave > val)
        raiz->esquerda = inserir(raiz->esquerda, val);
    return raiz;
}

int getdireitaMin(struct no *raiz){
    struct no *temp = raiz;
    // min valor deve estar presente no nó mais à esquerda.
    while (temp->esquerda != NULL) {
        temp = temp->esquerda;
    }
    return temp->chave;
}

struct no *removeno(struct no *raiz, int val){
    /*
     * Se o nó se tornar NULL, ele retornará NULL 
     * Duas maneiras possíveis que podem desencadear este caso 
     * 1. Se enviarmos a árvore vazia. ou seja, raiz == NULL 
     * 2. Se o nó fornecido não estiver presente na árvore.
     */
    if (raiz == NULL)
        return NULL;
    /*
     * Se raiz->chave < val. val deve estar presente na subárvore direita 
     * Então, chame a função remove acima com raiz->right
     */
    if (raiz->chave < val)
        raiz->direita = removeno(raiz->direita, val);
    /*
     * se raiz->chave > val. val deve estar presente na subárvore esquerda 
     * Então, chame a função acima com raiz->left
     */
    else if (raiz->chave > val)
        raiz->esquerda = removeno(raiz->esquerda, val);
    /*
     * Esta parte será executada somente se raiz->chave == val 
     * A remoção real começa a partir daqui
     */
    else{
        /*
         * Caso 1: Nó folha. A referência esquerda e direita é NULL 
         * substitua o nó por NULL retornando NULL para o ponteiro de chamada. 
         * libera o nó
         */
        if (raiz->esquerda == NULL && raiz->direita == NULL){
            free(raiz);
            return NULL;
        }
        /*
         * Caso 2: Node tem filho certo. 
         * substitua o nó raiz por root->right e libere o nó certo
         */
        else if (raiz->esquerda == NULL){
            struct no *temp = raiz->direita;
            free(raiz);
            return temp;
        }
        /*
         * Caso 3: No deixou filho. 
         * substitua o nó por raiz->esquerda e libere o nó esquerdo
         */
        else if (raiz->direita == NULL){
            struct no *temp = raiz->esquerda;
            free(raiz);
            return temp;
        }
        /*
         * Caso 4: No tem filhos à esquerda e à direita. 
         * Encontre o valor mínimo na subárvore direita 
         * substitua o valor do nó por mínimo. 
         * E chame novamente a função remove para excluir o nó que possui o valor mínimo. 
         * Como encontramos o valor mínimo da subárvore direita, chame a função remove com root->right
         */
        else{
            int direitaMin = getdireitaMin(raiz->direita);
            raiz->chave = direitaMin;
            raiz->direita = removeno(raiz->direita, direitaMin);
        }
    }

    // retorna o endereço real da raiz
    return raiz;
}

/*
 * ele irá imprimir a árvore em ordem crescente
 */
void ordena(struct no *raiz){
    if (raiz == NULL)
        return;
    ordena(raiz->esquerda);
    printf("%d ", raiz->chave);
    ordena(raiz->direita);
}

int main(){
    /*
         100
         / \
        50  200
            /  \
           150  300
     */
    struct no *raiz = NULL;
    raiz = inserir(raiz, 100);
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 200);
    raiz = inserir(raiz, 150);
    raiz = inserir(raiz, 300);

    printf("IInicializando arvore:\t");
    ordena(raiz);
    printf("\n");

    /* remove folha no 300
         100
         / \
        50  200
            /
           150
     */
    raiz = removeno(raiz, 300);
    printf("Depois de deletar o 300, a nova arvore:\t");
    ordena(raiz);
    printf("\n");

    /* remove raiz no 100
         150
         / \
        50  200
     */
    raiz = removeno(raiz, 100);
    printf("Depois de deletar o 100, a nova arvore:\t");
    ordena(raiz);
    printf("\n");

    return 0;
}