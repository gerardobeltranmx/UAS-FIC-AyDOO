#include <iostream>
using namespace std;

int main() {
 
   int N, M, i, j;
   // int mat[100][100];
   cin >> M >> N;
   int mat[M][N];

 // entrada de datos a matriz
   for (i=0; i<M; i++)
      for(j=0; j<N; j++)
         cin >> mat[i][j];

   // imprime valores de coordenadas pares
   for (i=M-1; i>=0; i-- ){
      for (j=0;j<N;j++){
           if(i%2==0 and j%2==0)
               cout << mat[i][j] << " "; 
      }
   }
   

   return 0;
}
