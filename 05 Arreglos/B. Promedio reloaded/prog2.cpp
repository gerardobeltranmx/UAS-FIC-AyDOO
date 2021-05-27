#include <iostream>
using namespace std;

double promedioArreglo(int datos[], int N);

int main() {
 
  int N, i, contar=0;

  double promedio;

  int datos[100];

  cin >> N;

  for (i=0; i< N; i++){
     cin >> datos[i];
   }

   promedio = promedioArreglo(datos, N);
 
  for (i=0; i<N; i++){
    if (datos[i]>promedio){
         contar++;
    }
  }

  cout << contar;

   return 0;
}
double promedioArreglo(int datos[], int N){
  int i, suma=0;
  double promedio;
  
  for (i=0; i<N ; i++){
    suma = suma + datos[i];
  }
  promedio = (double)suma / N; 

  return promedio;
}
