#include <iostream>
using namespace std;

int main() {
   int N, i,j, suma, aux;
   int sm = 1;
   cout << N;
   
   int mat[N][N];

   for (i=0;i<N;i++)
      for (j=0; j<N; j++)
         cin >> mat[i][j];
   // revisión por renglones
   for (i=0; i< N and sm==1; i++){
       suma=0;
       for (j=0;j<N; j++){
         suma += mat[i][j];   
       }
       if (i==0){
          aux = suma;
       }   
       else if(suma!=aux){
           sm=0; 
       }         
   } 
// revisión por columnas
   for (j=0; j< N and sm==1; j++){
       suma=0;
       for (i=0;i<N; i++){
         suma += mat[i][j];   
       }
       if(suma!=aux){
           sm=0; 
       }         
   } 

   

cout << sm << endl ;
   return 0;
}
