#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int NumElementos, i, dato;
   float prom; 
   int mayor, menor,suma;

   cin >> NumElementos;
   suma = 0;
   menor = 1001;
   mayor = 0;
   for (i=0;i<NumElementos; i++){

      cin >> dato;

      if (dato>mayor)
             mayor=dato;
      if (dato<menor)
          menor=dato;

      suma += dato;
   }
   prom = (float)suma  / NumElementos;
   if (suma % 2 == 0)
     cout << prom << " "<< menor << " " << mayor  << endl;
   else
      cout << fixed << setprecision(3)<<prom << " "<< menor << " " << mayor  << endl;
      
   return 0;
}
