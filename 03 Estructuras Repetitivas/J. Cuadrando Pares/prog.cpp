#include <iostream>
using namespace std;

int main() {
   int N, r, d, contar=0;

   cin >> N;
 
   while (N!=0){
      r = N % 10;  // digito de la derecha
      N = N / 10;  // digitos sobrantes
      
      if (r % 2)
         contar++;
   }
  
   if ((contar % 2) == 0) // determina si el numero de pares es par 
        cout << "SI";
   else 
        cout << "NO";     

   return 0;
}
