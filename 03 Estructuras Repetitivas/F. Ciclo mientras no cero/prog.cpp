#include <iostream>
using namespace std;

int main() {
   int valor, suma=0;

  cin >> valor;
 
  while (valor!=0){
     suma = suma + valor; 
     cin >> valor;
  }
  
  cout << suma << endl;
  
   return 0;
}
