// Created by fjoao on 26/08/2026.

#include <iostream>

using namespace std;

int main() {
    float altura, raio, volume;
    float Pi = 3.14;

    //Entrada de dados do usuario
    cout << "Vamos Calcular o Volume do Cilindro" << endl;
    cout << "Primeiro informe a altura do Cilindro: " << endl;
    cin >> altura;
    cout << "Agora infrome o raio do Cilindro: " << endl;
    cin >> raio;

    //Calculo do volume
    volume = Pi * raio * raio * altura;

    cout << "O volume do Cilindo e: " << volume << endl;

    return 0;
}
