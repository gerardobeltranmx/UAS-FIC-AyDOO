#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 
 int a, b, m;
// Entrada de datos
 cin >> a;
 cin >> b;

 if (a>b)
    m=a; // a es el mayor
 else if (b>a)
    m=b; // b es el mayor
 else 
    m = a; // son iguales
  
  cout << fixed << "$" <<setfill('*') <<setw(5) << m<<endl ;

   return 0;
}