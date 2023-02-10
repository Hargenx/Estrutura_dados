/*
 * Programa: Pesquisa Arvore binaria inserir 
 * Liguagem: C
 */

#include <stdio.h>
#include <stdlib.h>

struct no{
    int chave;
    struct no *esquerda;
    struct no *direita;
};

// esta função retornará o novo nó com o valor fornecido
struct no *getNovoNo(int val){
    struct no *novoNo = malloc(sizeof(struct no));
    novoNo->chave = val;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;

    return novoNo;
}

struct no *inserir(struct no *raiz, int val){
    /*
     * Ele vai lidar com dois casos,
     * 1. se a árvore estiver vazia, retorna um novo nó na raiz
     * 2. se o percurso da árvore atingir NULL, ele retornará o novo nó
     */
    if (raiz == NULL)
        return getNovoNo(val);
    /*
     * se dado val for maior que raiz->chave,
     * devemos encontrar o lugar correto na subárvore direita e inserir o novo nó
     */
    if (raiz->chave < val)
        raiz->direita = inserir(raiz->direita, val);
    /*
     * se dado val for menor que raiz->chave,
     * devemos encontrar o lugar correto na subárvore direita e inserir o novo nó
     */
    else if (raiz->chave > val)
        raiz->esquerda = inserir(raiz->esquerda, val);
    /*
     * Ele vai lidar com dois casos
     * (Evite os nós duplicados na árvore)
     * 1.se raiz->chave == val ele retornará imediatamente o endereço do nó raiz
     * 2.Após a inserção, ele retornará o endereço da raiz original inalterado
     */
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
    struct no *raiz = NULL;
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 5);
    raiz = inserir(raiz, 15);
    raiz = inserir(raiz, 5);
    ordena(raiz);
    return 0;
}