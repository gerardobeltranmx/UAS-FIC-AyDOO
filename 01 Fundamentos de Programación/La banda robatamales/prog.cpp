#include <iostream>
using namespace std;

int main() {
  int T, B, M, RM, L, RB, TB, TS;
  cin >> T;
  cin >> B;

  M = T / 2; // mitad de los tamales
  RM = T % 2; // el sobrante
  L =  M + RM; // lo que se lleva el lider

  RB  = B - 1; // Resto de los bandidos 

  TB = M / RB; // tamales para cada bandido restante

  TS = M % RB; // el sobrante de tamales

  L = L + TS; // el lider se lleva lo que le sobra a los bandidos
 
  cout << L<< endl; // los tamales que se lleva el lider

   return 0;
}
