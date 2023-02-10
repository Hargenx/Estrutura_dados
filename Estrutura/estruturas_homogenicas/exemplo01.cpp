#include <iostream>

int main(){
    int numeros[5], contador, pos = 1;
    for(int i = 0; i < 5; i++){
        std::cout << "Digite o "<< pos << " numero: ";
        std::cin >> numeros[i];
        pos++;
    }
    contador = 0;
    for(int i = 0; i < 5; i++){
        if(numeros[i] > 100){
            contador++;
        }
    }
    std::cout << "Existe(m) "<< contador <<" valores acima de 100.";
}