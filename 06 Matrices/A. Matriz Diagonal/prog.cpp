#include <iostream>
using namespace std;

int main() {
   int N,i,j, dato;
   int mat[100][100];
   bool estado=true;
   
   cin >> N;

   // entrada de datos a la matriz
   for(i=0;i<N;i++){
      for(j=0;j<N; j++)
         cin >> mat[i][j];
   }

   dato = mat[0][0];

   for (i=0;i<N && estado==true;i++){
      if (dato!=mat[i][i]){
         estado = false;
      }
          
   }

   if (estado == true)
      cout << "SI"<< endl;
   else
      cout << "NO"<< endl;;   

   return 0;
}
