
#include <iostream>
using namespace std;

int main() {
    cout << "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n";
    cout << "\xBA             Patos e Coelhos            \xBA\n";
    cout << "\xBA \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD \xBA\n";
    cout << "\xBA              Aula de C++               \xBA\n";
    cout << "\xBA              Joao Felipe               \xBA\n";
    cout << "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n";


    int cabecas;
    int pes;
    int coelhos;
    int patos;

    //Entrada dos dados
    cout << "Quantas cabecas tem no cercado? ";
    cin >> cabecas;
    cout << "Quantas pes tem no cercado? ";
    cin >> pes;

    //Caculo
    /*
     Formula da equação matematica:
     cabeças * 4 - 2 * (cabeças - coelhos) = pés

     Conversão da formula:
     cabeças = c
     pés = p
     coelhos = x

     c * 4 - 2 * (c - x) = p
     4c - 2c - 2x = p
     2c - 2x = p
     2x = p - 2c
     x = (p - 2c) /2

     Formula da equação na programação:
     coelhos = (pés - cabeças * 2)/2
    */

    coelhos = (pes - cabecas*2)/2;
    patos = cabecas - coelhos;


    cout << "Total de coelhos no cercado: " << coelhos << "\n";
    cout << "Total de patos no cercado: " << patos << "\n";

    return 0;
}