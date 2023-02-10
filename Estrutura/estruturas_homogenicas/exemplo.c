#include<stdio.h>
int main(){
    int i, j;
    int valores_matriz[3][3] = {{-2, 8, 12}, {6, -9, 7}, {10, -3, 22}};
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) {
            if(valores_matriz[i][j] < 0){
                valores_matriz[i][j] *= -1;
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", valores_matriz[i][j]);
        }
        printf("\n");
    }
}