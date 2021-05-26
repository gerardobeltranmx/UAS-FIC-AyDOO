#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
   int c, n, k, i, suma, contar;
   int calif[1000];
   double prom, porcentaje;

   cin >> c; // Numero de casos/grupos

   for(k=0; k<c; k++)
   {
      cin >> n; // Numero de estudiantes del caso/grupo
      suma=0;
      contar=0;
      for (i=0; i<n ; i++)
      {
      cin >> calif[i];
         suma += calif[i]; // Suma de calificaciones del caso/grupo
         // suma = suma + calif[i];
      }  

      prom  = (double) suma / n;  // Promedio del caso/grupo
      
      for (i=0; i<n; i++){
      if (calif[i]> prom)
            contar++;
      }
      // Porcentaje del caso/grupo
      porcentaje = ((double)contar / n) * 100 ;
      cout << fixed << setprecision(3) << porcentaje<<"%"<<endl; 
   }
   return 0;
}
