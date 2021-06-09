#include <iostream>
using namespace std;

int main() {
   int N, i, j;
   
   cin >> N;
   int mat1[N][N];
   int mat2[N][N];
   int mat3[N][N];
   

   // entrada matriz 1
   for(i=0;i<N; i++){
      for (j=0;j<N;j++){
         cin >> mat1[i][j];
      }
   }
   // entrada matriz 2
   for(i=0;i<N; i++){
      for (j=0;j<N;j++){
         cin >> mat2[i][j];
      }
   }  
   for(i=0;i<N; i++){
      for (j=0;j<N;j++){
         mat3[i][j]=mat1[i][j]+mat2[i][j];
      }
   }

   for(i=0;i<N; i++){
      for (j=0;j<N;j++){
         cout << mat3[i][j] << " ";
      }
      cout << endl;
   }




   return 0;
}
