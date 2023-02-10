#include <iostream>
using namespace std;

struct PESSOA
{              // Declare PESSOA struct type
    int idade; // Declare member types
    long id;
    float peso;
    char name[25];
} membro_familia; // Define object of type PESSOA

int main(){
    struct PESSOA irma; // C style structure declaration
    PESSOA irmao;       // C++ style structure declaration
    irma.idade = 13;    // assign values to members
    irmao.idade = 7;
    cout << "Sua irma tem " << irma.idade << " anos de idade" << '\n';
    cout << "Seu irmao tem " << irmao.idade << " anos de idade" << '\n';
}