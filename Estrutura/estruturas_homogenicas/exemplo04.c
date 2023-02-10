#include <stdio.h>
int main(){
    float media = 0;
    int valores[4][4], somapar = 0, somaimpar = 0, i, j, cont = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um numero inteiro: ");
            scanf("%d", &valores[i][j]);
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (j % 2 == 0){
                somapar += valores[i][j];
                cont++;
            }else{
                somaimpar += valores[i][j];
            }
        }
    }
    media = somapar / cont;
    printf("A soma dos valores impares eh %d", somaimpar);
    printf("\nA media dos valores pares eh %.2f", media);
}