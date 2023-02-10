#include <stdio.h>
#include <math.h>

int main(){
    int valores[5], resultados[5], pos = 1;
    for(int i = 0; i < 6; i++){
        printf("Digite o %d valor: ", pos);
        scanf("%d", &valores[i]);
        pos++;
    }
    for(int i = 0; i < 6; i++){
        printf("\n");
        resultados[i] = pow(valores[i], 2);
    }
    for(int i = 0; i < 6; i++){
        printf("Valor do vetor A posicao [%d] = %d \tValor do vetor B posicao [%d] = %d\n", i, valores[i], i, resultados[i]);
    }
}