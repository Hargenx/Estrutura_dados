#include <iostream>
#include <vector>
int main(){
    std::vector<int> numeros_primos{2, 3, 5, 7};
    std::cout << "Vetor inicial: ";
    for (int i : numeros_primos){
        std::cout << i << " ";
    }
    // remover o ultimo elemento
    numeros_primos.pop_back();
    // vetor final
    std::cout << "\nVetor atualizado: ";
    for (int i : numeros_primos){
        std::cout << i << " ";
    }
    return 0;
}