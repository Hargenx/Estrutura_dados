#include <iostream>
using namespace std;

struct PESSOA{  // Declare PESSOA struct type
    int idade; // Declare member types
    long id;
    float peso;
    char name[25];
} membro_familia; // Define object of type PESSOA

struct CELL{ // Declare CELL bit field
    unsigned short character : 8;  // 00000000 ????????
    unsigned short foreground : 3; // 00000??? 00000000
    unsigned short intensity : 1;  // 0000?000 00000000
    unsigned short background : 3; // 0???0000 00000000
    unsigned short blink : 1;      // ?0000000 00000000
} screen[25][80];  // Array of bit fields

int main()
{
    struct PESSOA irma; // C style structure declaration
    PESSOA irmao;       // C++ style structure declaration
    irma.idade = 13;      // assign values to members
    irmao.idade = 7;
    cout << "Sua irma tem " << irma.idade << " anos de idade" << '\n';
    cout << "Seu irmao tem " << irmao.idade << " anos de idade" << '\n';

    CELL minha_celula;
    minha_celula.character = 1;
    cout << "minha_celula.character = " << minha_celula.character;
}
// Output:
// irma.idade = 13
// irmao.idade = 7
// minha_celula.character = 1