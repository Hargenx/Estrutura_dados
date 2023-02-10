#include <iostream>

int main(){
    int A[3][3] = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}};
    int B[3][3] = {{5, 35, 70}, {1, 25, 30}, {1, 4, 7}};
    int C[3][3], i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (A[i][j] > B[i][j]){
                C[i][j] = A[i][j];
            }else{
                C[i][j] = B[i][j];
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
}