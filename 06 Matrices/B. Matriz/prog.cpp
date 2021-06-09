#include <iostream>
using namespace std;

int main() {
   int F, C, i,j;
   //int mat[50][50];
   cin >> F >> C;
   int mat[F][C];
   // entrada de datos
   for (i=0;i<F; i++){
      for (j=0; j<C; j++){
         cin >> mat[i][j];
      }
   }
   // salida de datos
   for ( i = F-1; i>=0; i--)
   {
      for (j=0; j<C; j++){
         cout << mat[i][j] << " ";
      }
      cout << endl;
   }
   
 
   return 0;
}
