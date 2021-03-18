#include <iostream>
using namespace std;

int main() {
 
 int a, b;
// Entrada de datos
 cin >> a;
 cin >> b;

 if (a>b)
    cout << a; // a es el mayor
 else if (b>a)
    cout << b; // b es el mayor
 else 
    cout << a; // son iguales
  
   return 0;
}