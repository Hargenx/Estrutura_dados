#include <iostream>
#include <vector>
int main(){
    std::vector<int> num{1, 2, 3, 4, 5};
    std::cout << "Vetor inicial: ";
    for (const int &i : num){
        std::cout << i << "  ";
    }
    // Alterar elementos nos indexes 1 e 4
    num.at(1) = 9;
    num.at(4) = 7;
    std::cout << "\nAtualizar Vetor: ";
    for (const int &i : num){
        std::cout << i << "  ";
    }
    return 0;
}