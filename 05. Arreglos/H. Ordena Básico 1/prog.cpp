#include <iostream>
#include <algorithm>

using namespace std;

int main() {
 
   int N;
   // Numero de datos a ordenar
   cin >> N;

   double datos[N];
   // entrada de datos
   for (int i=0; i<N; i++){
      cin >> datos[i];
   }
   // Ordenamiento ascendente de los datos
   sort(datos, datos + N, greater<double>());
 
   // Ordenamiento ascendente de los datos 
   // sort(datos, datos + N, greater<int>());
    
   // invertir los datos 
   //reverse(datos, datos + N); 

   // Salida de los datos
   for (int i=0; i<N; i++){
      cout << datos[i] << endl;
   }
 
   return 0;
}