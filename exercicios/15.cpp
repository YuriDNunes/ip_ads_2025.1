/*
Crie um programa que solicite ao usuário o valor do raio de uma esfera e calcule e exiba o seu volume.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

      double raio, pi;

      cout << "Informe o valor do raio: ";
      cin >> raio;

      pi = 3.14;

      double volume = (4 * pi * (pow(raio, 3))) / 3;

      cout << "O volume da esfera é de " << volume << endl;

}