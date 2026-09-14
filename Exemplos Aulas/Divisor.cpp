#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int numero;
    int divisor;
    int resto;

    cout << "Digite um numero: ";
    cin >> numero;

    for (divisor = 1; divisor <= numero; divisor++) {
        resto = numero % divisor;
        if (resto == 0) {
            cout << "Divisor encontrado: " << numero << endl;
        }
    }
    getchar(); getchar();
    return 0;
}

// int main () {
//     for (;;)
//         cout << "Eu sou um laco infinito" << endl;
//     return 0;
//
// }