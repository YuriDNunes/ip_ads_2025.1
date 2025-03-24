/*
Escreva um programa que calcule a velocidade média de um objeto, utilizando a fórmula
v = ds/dt
onde 'v' é a velocidade média, 'ds' é a variação de espaço e 'dt' variação de tempo.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

      int ds, dt;

      cout << "Informe o valor da variação de espaço" << endl;
      cin >> ds;
      cout << "Informe o valor da variação de tempo" << endl;
      cin >> dt;

      int v = ds / dt;

      cout << "A velocidade media é de " << v << "Km/h" << endl;

  }