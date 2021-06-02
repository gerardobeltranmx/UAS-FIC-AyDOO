#include <iostream>
using namespace std;

int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main() {
 
   int N, i;
   // Numero de datos a ordenar
   cin >> N;

   int datos[N];
   // entrada de datos
   for (i=0; i<N; i++){
      cin >> datos[i];
   }
   // Ordenamiento de los datos
   qsort(datos, N, sizeof(int), asc); // Función de ordenación

   // Salida de los datos
   for (i=0; i<N; i++){
      cout << datos[i] << endl;
   }
 
   return 0;
}
