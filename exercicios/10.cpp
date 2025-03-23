/*
Escreva um programa que calcule o perímetro e a área de um triângulo, utilizando as fórmulas
P = a + b + c
A = (b * h ) / 2
onde 'a', 'b' e 'c' são os lados do triângulo e 'h' é a altura relativa ao lado 'b'.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, h, escolha;

    cout << "=========" << endl << "Bem vindo a calculador" << endl << "=========" << endl << endl;

    cout << "[1] Perimetro" << endl << "[2] Area" << endl << "[3] Perimetro e area" << endl << "[0] Sair" << endl;
    cin >> escolha;
    switch(escolha) {

      case 1:
        cout << "Digite os valores a, b e c respectivamente: " << endl;
        cin >> a >> b >> c;
        cout << "Perimetro: " << a + b + c << endl;
        break;
      case 2:
        cout << "Digite os valores b e h: " << endl;
        cin >> b >> h;
        cout << "Area: " << (b * h) / 2 << endl;
        break;
      case 3:
        cout << "Digite os valores a, b, c e h respectivamente: " << endl;
        cin >> a >> b >> c >> h;
        cout << "Perimetro: " << a + b + c << endl << "Area: " <<  (b * h) / 2 << endl;
        break;
      case 0:
        break;
    }

}