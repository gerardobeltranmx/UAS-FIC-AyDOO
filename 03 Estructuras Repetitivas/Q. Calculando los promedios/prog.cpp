#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int NumElementos, NumListas, i, dato, k;
   float prom; 
   int mayor, menor,suma;

  cin >> NumListas; // Numeros de listas
   for (k=0; k<  NumListas; k++){
      cin >> NumElementos;
      suma = 0;
      menor = 1001;
      mayor = 0;
      for (i=0;i<NumElementos; i++){

         cin >> dato; // Datos de la lista

         if (dato>mayor)
               mayor=dato;
         if (dato<menor)
            menor=dato;

         suma += dato;
      }
      prom = (float)suma  / NumElementos;
      if (suma % NumElementos == 0)
      //cout << (int)prom << " "<< menor << " " << mayor  << endl;
      cout <<fixed << setprecision(0) << prom << " "<< menor << " " << mayor  << endl;
      else
         cout << fixed << setprecision(3)<<prom << " "<< menor << " " << mayor  << endl;
   }      
   return 0;
}
