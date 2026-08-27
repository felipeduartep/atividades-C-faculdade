
#include <iostream>
using namespace std;

int main() {
    cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    cout << "\xBA           Valores 2 numeros            \xBA\n";
    cout << "\xBA \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD \xBA\n";
    cout << "\xBA              Aula de C++               \xBA\n";
    cout << "\xBA              Joao Felipe               \xBA\n";
    cout << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n";


    double numero1, numero2;

    cout << "Entre com o primeiro numero: ";
    cin >> numero1;
    cout << "Entre com o segundo numero: ";
    cin >> numero2;

    //Calculos
    double soma = numero1 + numero2;
    double diferenca = numero1 - numero2;
    double produto = numero1 * numero2;
    double media = (numero1 + numero2) / 2;

    //Saida de dados
    cout << "Soma: " << soma << endl;
    cout << "Diferenca: " << diferenca << endl;
    cout << "Produto: " << produto << endl;
    cout << "Media: " << media << endl;

    return 0;
}
