#include <iostream>
using namespace std;
int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}
int desc (const void * a, const void * b){
    return ( *(int*)b - *(int*)a );
}

int main() {
   int N,i;
   cin >> N;
   int datos[N];

   for (i=0; i<N; i++){
      cin >> datos[i];
   }
   cout << "POSITIVOS" << endl;
   qsort(datos, N, sizeof(int),asc);
   for (i=0; i<N; i++){
      if(datos[i]>0){
         cout << datos[i]<<endl;
      }
   }
   cout << "NEGATIVOS" << endl;
   qsort(datos, N, sizeof(int), desc);
   for (i=0; i<N; i++){
      if(datos[i]<0){
         cout << datos[i] << endl;
      }
   }
   return 0;
}
