/*
Escreva um programa que calcule o trabalho realizado por uma força que atua sobre um objeto, utilizando a fórmula
T = F*d
onde 'T' é o trabalho, 'F' é a força aplicada e 'd' é a distância percorrida pelo objeto.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

      int forca, distancia;

      cout << "Informe a força aplicada: ";
      cin >> forca;
      cout << "Informe a distancia: ";
      cin >> distancia;

      int trabalho = forca * distancia;

      cout << "Trabalho = " << trabalho << endl;

}