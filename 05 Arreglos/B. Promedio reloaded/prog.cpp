#include <iostream>
using namespace std;

int main() {
 
  int N, i, suma=0, contar=0;

  double promedio;

  int datos[100];

  cin >> N;

  for (i=0; i< N; i++){
     cin >> datos[i];
      suma = suma + datos[i];
  }

  promedio = (double)suma / N; 
 
  for (i=0; i<N; i++){
    if (datos[i]>promedio){
         contar++;
    }
  }

  cout << contar;

   return 0;
}
