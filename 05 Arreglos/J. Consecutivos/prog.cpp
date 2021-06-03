#include <iostream>
using namespace std;

int asc (const void * a, const void * b){
    return ( *(int*)a - *(int*)b );
}

int main() {
   int datos[1000];
   int i, N;  
   bool consecutivo=true;
   cin >> N;

   for (i=0; i<N; i++){
      cin >> datos[i];
   }
   
   qsort(datos, N, sizeof(int), asc);

   for (i=0; i<N-1 and consecutivo == true; i++ ){
      if ((datos[i]+1) != datos[i+1])
         consecutivo=false;
   }

   if (consecutivo==true)
       cout << "SI";
   else
      cout << "NO";    

   return 0;
}
