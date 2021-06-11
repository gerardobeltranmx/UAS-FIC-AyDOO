#include <iostream>
using namespace std;

int main() {
   int N, M, i, j;

   //int mat[1000][1000];

   cin >> N >> M;
   int mat[N][M];

   // entrada de datos a matriz
   for (i=0; i<N; i++)
      for(j=0; j<M; j++)
         cin >> mat[i][j];

   for (j=0; j<M; j++){
      //int menor = 100001;
      int menor =mat[0][j];
      for (i=1; i<N;i++){
         if(mat[i][j]<menor) 
               menor = mat[i][j];
      }
      cout << menor << " ";
   }



 
   return 0;
}
