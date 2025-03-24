/*
Faça um programa que receba uma palavra e exiba cada letra separadamente.
Atenção: Necessita de um laço de repetição.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){

      string palavra;

      cout << "Informe uma palavra." << endl;
      cin >> palavra;

      for (int i = 0; i < palavra.length(); i++){
        cout << palavra[i] << endl;

      }

  }