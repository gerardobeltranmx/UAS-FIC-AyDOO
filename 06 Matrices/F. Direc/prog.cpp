#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   int n, m, p, k, i,j,a,b, q,r ;
   double suma, prom;
   
   //int calif[1000][1000];
   // entrada a numero de alumnos (n) y calificaciones (m) 
   cin >> n >> m;

   int calif[n][m];
 
   for(i=0; i<n; i++)
      for (j=0;j<m; j++)
         cin >> calif[i][j];

   // entrada al numero de preguntas del director
   cin >> p;

   for (k=0; k<p; k++){
      cin >> a >> b >> q >> r; // entrada a las preguntas
      for (i=a-1; i<b-1; i++){
         suma=0;
         for (j=q-1; j<r-1; j++){
               suma+=calif[i][j];
         }
         prom = suma / (r-q+1);
         cout << fixed<< setprecision(0)<< prom << endl;
      }
   }

   return 0;
}
