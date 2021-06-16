#include <iostream>
using namespace std;

int main() {
   
   int n, m, p, k, i,j,a,b, q,r ;
   int suma, prom, cont;
   
   //int calif[1000][1000];
   // entrada a numero de alumnos (n) y calificaciones (m) 
    cin >> n >> m;

   int calif[n][m];

   for (i=0;i<n; i++)
      for (j=0; j<m; j++)
        cin >> calif[i][j];

   // entrada al numero de preguntas del director
   cin >> p;

   for (k=0; k<p; k++){
      suma = 0;
      cont = 0;
      cin >> a >> b >> q >> r; // entrada a las preguntas
      
      for (i=a; i<=b; i++){ // recorre alumnos
         for (j=q; j<=r; j++){ // recorre materias de cada alumno
            suma += calif[i-1][j-1];
            cont++;
         }   
      }
      prom = suma / cont;
      cout << prom << endl;
   }



   return 0;
}
