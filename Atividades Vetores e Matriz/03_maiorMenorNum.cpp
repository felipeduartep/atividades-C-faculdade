#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    cout <<
            "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    cout << "\xBA             Menor E Menor              \xBA\n";
    cout <<
            "\xBA \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD \xBA\n";
    cout << "\xBA              Aula de C++               \xBA\n";
    cout << "\xBA              Joao Felipe               \xBA\n";
    cout << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n";

    int numeros[10];
    int menor = numeros[0];
    int maior = numeros[0];
    int posicaoMaior = 0;
    int posicaoMenor = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << (i + 1) << ". numero:";
        cin >> numeros[i];
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] >= maior) {
            maior = numeros[i];
            posicaoMaior = i+1;
        }
        if (numeros[i] <= menor) {
            menor = numeros[i];
            posicaoMenor = i+1;
        }
    }

    cout << "Maior numero: " << maior << endl;
    cout << "Posicao: " << posicaoMaior << endl;
    cout << "-------------------------------" << endl;
    cout << "Menor numero: " << menor << endl;
    cout << "Posicao: " << posicaoMenor << endl;

    return 0;
}
