#include <iostream>
using namespace std;

int main() {
 
    int n, m, a, b;

    cin >> n >> m;

    a = n / m; // valor entero

    b = n % m; // residuo

    if (b==0) // es division entera?
        cout << a<< endl;
    else
        cout << a << " "<< b << "/" << m<< endl;
  
   return 0;
}