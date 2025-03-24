/*
Crie um programa que leia duas palavras e as contcatene, exibindo a palavra resultante.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

  string palavra1, palavra2, resultado;

  cout << "Informe a palavra 1: " << endl;
  cin >> palavra1;
  cout << "Informe a palavra 2: " << endl;
  cin >> palavra2;

  resultado = palavra1 + palavra2;

  cout << resultado << endl;

}