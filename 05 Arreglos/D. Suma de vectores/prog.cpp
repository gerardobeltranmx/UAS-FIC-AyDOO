#include <iostream>
using namespace std;

int main() {
   int N, i, suma;
   int arr1[100];
   int arr2[100];
   int arr3[100];
   cin >> N; // Entrada al tamaño de los arreglos

   // Entrada al primer arreglo
   for(i=0; i< N; i++){
      cin >> arr1[i];
   }
      // Entrada al segundo arreglo
   for(i=0; i< N; i++){
      cin >> arr2[i];
      arr3[i] = arr1[i] + arr2[i];
     // cout << suma << " ";
   }

   for (i=0; i< N; i++){
      cout << arr3[i] << " ";
   }
/*
   for (i=0; i<N; i++){ // acceso en paralelo
      suma = arr1[i] + arr2[i];
      cout << suma << " ";
   }
*/




 
  
   return 0;
}
