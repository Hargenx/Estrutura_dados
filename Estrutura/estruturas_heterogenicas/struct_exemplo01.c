#include <stdio.h>
struct pessoa{
    int idade;
    float peso;
};

int main(){
    struct pessoa *pessoaPtr, pessoa1;
    pessoaPtr = &pessoa1;

    printf("Entre idade: ");
    scanf("%d", &pessoaPtr->idade);

    printf("Entre peso: ");
    scanf("%f", &pessoaPtr->peso);

    printf("Exibindo:\n");
    printf("idade: %d\n", pessoaPtr->idade);
    printf("peso: %.2f", pessoaPtr->peso);

    return 0;
}