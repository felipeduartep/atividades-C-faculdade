#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, maior, menor, meio;

    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;
    cout << "Insira o terceiro numero: ";
    cin >> num3;


    if (num1 < num2) {
        if (num2 < num3) {
            menor = num1;
            meio = num2;
            maior = num3;
        } else if (num1 < num3) {
            menor = num1;
            meio = num3;
            maior = num2;
        } else {
            menor = num3;
            meio = num1;
            maior = num2;
        }
    } else {
        if (num1 < num3) {
            menor = num2;
            meio = num1;
            maior = num3;
        } else if (num2 < num3) {
            menor = num2;
            meio = num3;
            maior = num1;
        } else {
            menor = num3;
            meio = num2;
            maior = num1;
        }
    }
        cout << "ORDEM CRESCENTE\n";
        cout << menor << " | " << meio << " | " << maior << "\n";


        return 0;
    }
