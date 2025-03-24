/*
Escreva um programa que receba um nome e verifique se o mesmo começa com o caracter 'A' ou 'a'.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string palavra, resultado;

    cin >> palavra;

    for (int i = 0; i < palavra.length(); i++){
      if (palavra[0] == 'a' || palavra[0] == 'A'){
        cout << "A palavra comeca com a letra a" << endl;
        break;
      }
      else{
        cout << "A palavra nao comeca com a letra a" << endl;
        break;
        }
    }

  }