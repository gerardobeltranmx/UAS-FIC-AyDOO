#include <iostream>
using namespace std;

int main() {
 
   int N, i, dato, mitad, izq=0, der=0;

  cin >> N;

  mitad = N/2;

for (i=1; i <= N; i++){

   cin >> dato;
    
   if (i <= mitad )
      izq = izq + dato; 
   else 
      der = der + dato;
 }
 
  if (izq == der)
     cout << izq << " " << 1;
  else
     cout << (izq+der) << " " << 0;   
  
   return 0;
}
