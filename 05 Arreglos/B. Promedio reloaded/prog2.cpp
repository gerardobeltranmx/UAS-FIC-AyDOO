#include <iostream>
using namespace std;

double promedioArreglo(int datos[], int N);
int cuentaMayoresPromedio(int datos[], int N, double promedio);
int main() {
 
  int N, i, contar=0;
  double promedio;
  int datos[100];
  
  cin >> N;
  
  for (i=0; i< N; i++){
     cin >> datos[i];
  }

  promedio = promedioArreglo(datos, N);
  contar = cuentaMayoresPromedio(datos,N, promedio);
  
  cout << contar;

   return 0;
}
// Calcula promedio de una arreglo de tamaño N
double promedioArreglo(int datos[], int N){
  int i, suma=0;
  double promedio;
  
  for (i=0; i<N ; i++){
    suma = suma + datos[i];
  }
  promedio = (double)suma / N; 

  return promedio;
}
// cuenta mayores al promedio
int contarMayoresPromedio(int datos[], int N, double promedio){
  int contar=0, i;
  for (i=0; i<N; i++){
    if (datos[i]>promedio){
         contar++;
    }
  }
  return contar;
}