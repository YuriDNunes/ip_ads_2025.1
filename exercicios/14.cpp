/*
Escreva um programa que leia a posição x e y de dois pontos no plano cartesiano e calcule a distância entre eles.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

      int x1, x2, y1, y2;

      cout << "Informe os valores de x2 e y2 respectivamente:" << endl;
      cin >> x2 >> y2;
      cout << "Informe os valores de x1 e y1:" << endl;
      cin >> x1 >> y1;

      int distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

      cout << "Distancia = " << distancia << endl;

}