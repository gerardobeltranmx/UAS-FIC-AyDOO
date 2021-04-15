#include <iostream>
using namespace std;

int main() {
   int valor, suma=0;

  do {
     cin >> valor;
     suma = suma + valor; 
  } while (valor!=0);
  
  cout << suma << endl;
  
   return 0;
}
