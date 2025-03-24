/*
Escreva um programa que calcule a energia cinética de um  objeto em movimento, utilizando a fórmula
E = (mv²) / 2
onde 'E' é a energia cinética, 'm' é a massa do objeto e 'v' é a velocidade.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

      int energiaCinetica, massa, velocidade;

      cout << "Digite a massa do objeto: " << endl;
      cin >> massa;
      cout << "Digite a velocidade do objeto: " << endl;
      cin >> velocidade;

      energiaCinetica = (massa * pow(velocidade, 2)) / 2;

      cout << "A energia cinetica é de " << energiaCinetica << " J" << endl;

}