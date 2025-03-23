/*
Escreva um programa que calcule o perímetro e a área de um retângulo, utilizando as fórmulas
P = 2(l + c)
A = lc
onde 'l' é a largura e 'c' é o comprimento.
*/

#include <iostream>
#include <cmath>

using namespace std;
/*
int main(){

  int l, c;

  cout << "Digite a largura do retangulo:" << endl;
  cin >> l;
  cout << "Digite o comprimento do retangulo:" << endl;
  cin >> c;

  int p = 2 * (l + c);

  int a = l * c;

  cout << "Perimetro: " << p << endl << "Area: " << a << endl;

}

*/


void getValores (int &l,int &c) {
    cout << "Digite a largura do retangulo:" << endl;
    cin >> l;
    cout << "Digite o comprimento do retangulo:" << endl;
    cin >> c;
}


int main(){

    int l, c, n;
    char d;

    cout << "Quantas vezes deseja calcular: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "O que deseja calcular? [P/A]" << endl;
        cin >> d;

        switch (tolower(d)) {
            case 'p':
                getValores (l, c);
            cout << "Perimetro: " << 2 * (l + c) << endl;
            break;
            case 'a':
                getValores (l, c);
            cout << "Area: " << l * c << endl;
            break;
            default:
                cout << "Digite uma escolha valida" << endl;
        }
    }
}