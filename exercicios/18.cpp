/*
Crie um programa que receba uma frase e substitua todos os caracteres 'a' por 'e'.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

      string palavra;

      cin >> palavra;

      for (int i = 0; i < palavra.length(); i++){
        if(palavra[i] == 'a'){
            palavra[i] = 'e';
        }
      }
    cout << palavra << endl;

  }