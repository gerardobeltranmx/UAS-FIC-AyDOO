#include <iostream>
using namespace std;

int desc (const void * a, const void * b){
    return ( *(int*)b - *(int*)a );
}
int main() {
   int i;
   int datos[5];
   // entrada
   for (i=0; i<5; i++){
      cin >> datos[i];
   }

   qsort(datos, 5, sizeof(int), desc);

   for (i=0; i< 5; i++)
      cout << datos[i] << " "; 




 
   return 0;
}
