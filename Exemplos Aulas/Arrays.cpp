#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int i;

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            numeros[i] = i * 2;
        } else {
            numeros[i] = i * 3;
        }
    }

    for (i = 0; i < 10; i++) {
        cout << "Vetor [" << i << "] = " << numeros[i] << endl;
    }
}
