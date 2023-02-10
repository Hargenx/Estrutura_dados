#include <stdio.h>
#include <stdlib.h>
struct pessoa{
    int idade;
    float peso;
    char nome[30];
};

int main(){
    struct pessoa *ptr;
    int i, n;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    // alocando memória para n números de struct person
    ptr = (struct pessoa *)malloc(n * sizeof(struct pessoa));

    for (i = 0; i < n; ++i){
        //printf("Digite na sequencia o nome e a idade: ");
        printf("Digite o nome: ");
        scanf("%s", &(ptr + i)->nome);
        printf("Digite o idade: ");
        scanf("%d", &(ptr + i)->idade);
        // Para acessar membros da 1ª pessoa da estrutura, 
        // ptr->nome e ptr->idade é usado 
        // Para acessar membros da 2ª pessoa da estrutura, 
        // (ptr+1)->nome e (ptr+1)->idade é usado

        //scanf("%s %d", (ptr + i)->nome, &(ptr + i)->idade);
    }

    printf("Exibindo informacao:\n");
    for (i = 0; i < n; ++i)
        printf("nome: %s\tidade: %d\n", (ptr + i)->nome, (ptr + i)->idade);
    return 0;
}
