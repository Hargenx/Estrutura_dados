#include <iostream>
#include <vector>
int main(){
    std::vector<int> num{1, 2, 3, 4, 5};
    std::cout << "Elemento no Index 0: " << num.at(0) << std::endl;
    std::cout << "Elemento no Index 2: " << num.at(2) << std::endl;
    std::cout << "Elemento no Index 4: " << num.at(4) << std::endl;
    std::cout << "Elemento no Index 1: " << num[1];
    return 0;
}