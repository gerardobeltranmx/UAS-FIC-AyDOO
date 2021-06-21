#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char cadena [1000];
   int i, N;
   cin >> N;
   getchar();
   for (i=0;i<N; i++){
      // Lee cadena de caracteres, maximo 1000 o hasta indiquemos enter.
      cin.getline(cadena, 1000); 
      cout << "\"" << cadena << "\" tiene " << strlen(cadena) << " caracteres"<<endl; 

   }

 
   return 0;
}
