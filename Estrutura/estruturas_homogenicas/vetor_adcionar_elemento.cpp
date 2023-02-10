#include <iostream>
#include <vector>

int main(){
    std::vector<int> num{1, 2, 3, 4, 5};
    std::cout << "Inicializar Vetor: ";
    for (const int &i : num){
        std::cout << i << "  ";
    }
    // adciona 6 e 7 ao vetor
    num.push_back(6);
    num.push_back(7);
    std::cout << "\nAtualizar Vetor: ";
    for (const int &i : num){
        std::cout << i << "  ";
    }
    return 0;
}