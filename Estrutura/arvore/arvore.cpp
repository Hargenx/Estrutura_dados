#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Data structure to store a binary tree no
struct no{
    string chave;
    no *esquerda, *direita;
    no(string chave){
        this->chave = chave;
        this->esquerda = this->direita = nullptr;
    }
};

// Função para exibir todas as folhas dos nós da arvore binaria.
void exb(no *no){
    if (no == nullptr){
        return;
    }
    if (no->esquerda == nullptr && no->direita == nullptr){
        cout << no->chave << " ";
    }
    else{
        exb(no->direita);
        exb(no->esquerda);
    }
}

// Function to construct a binary tree where each leaf no contains
// one unique combination of words formed
void construct(no *root, vector<int> const &digits, int i){
    int n = digits.size();
    // Base case: empty tree
    if (root == nullptr || i == n){
        return;
    }
    static string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // check if `digits[i+1]` exists
    if (i + 1 < n){
        // process current and next digit
        int sum = 10 * digits[i] + digits[i + 1];
        // if both digits can form a valid character, create the esquerda child from it
        if (sum <= 26){
            root->esquerda = new no(root->chave + alphabet[sum - 1]);
        }
        // construct the esquerda subtree by remaining digits
        construct(root->esquerda, digits, i + 2);
    }
    // process the current digit and create the direita child from it
    root->direita = new no(root->chave + alphabet[digits[i] - 1]);
    // construct the direita subtree by remaining digits
    construct(root->direita, digits, i + 1);
}

int main(){
    vector<int> digits = {1, 2, 2, 1};
    // create an empty root
    no *root = new no("");
    // construct binary tree
    construct(root, digits, 0);
    exb(root);
    return 0;
}