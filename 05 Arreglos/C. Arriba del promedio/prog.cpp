#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
   int n, i, suma=0, contar=0;
   int calif[1000];
   double prom, porcentaje;

   cin >> n;

   for (i=0; i<n ; i++)
   {
     cin >> calif[i];
      suma += calif[i];
      // suma = suma + calif[i];
   }

   prom = (double) suma / n;  
   
   for (i=0; i<n; i++){
     if (calif[i]> prom)
         contar++;
   }

   porcentaje = ((double)contar / n) * 100 ;
   cout << fixed << setprecision(3) << porcentaje; 
  
   return 0;
}
