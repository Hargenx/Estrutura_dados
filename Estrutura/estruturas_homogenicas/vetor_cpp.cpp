#include <iostream>
#include <vector>

int main(){
    // inicializando lista
    std::vector<int> primeiro_vetor = {1, 2, 3, 4, 5};
    // inicialização uniforme
    std::vector<int> segundo_vetor{6, 7, 8, 9, 10};
    // metodo 3
    std::vector<int> terceiro_vetor(5, 12);
    std::cout << "vetor 1 = ";
    // loop de alcance
    for (const int &i : primeiro_vetor){
        std::cout << i << "  ";
    }
    std::cout << "\nVetor 2 = ";
    // loop de alcance
    for (const int &i : segundo_vetor){
        std::cout << i << "  ";
    }
    std::cout << "\nvetor3 = ";
    // loop de alcance
    for (int i : terceiro_vetor){
        std::cout << i << "  ";
    }
    return 0;
}