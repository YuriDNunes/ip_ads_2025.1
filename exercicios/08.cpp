/*
Escreva um programa que calcule o delta de uma equação de segundo grau.
d = b² - 4ac
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int a, b, c;

  cout << "Digite o valor de a: ";
  cin >> a;
  cout << "Digite o valor de b: ";
  cin >> b;
  cout << "Digite o valor de c: ";
  cin >> c;


  if (a != 0) {
    int d = (pow(b,2)) - 4 * a * c;
    cout << "Valor do delta: " << d << endl;
  }
  else {
    cout << "Nao e possivel calcular o delta";
  }

}