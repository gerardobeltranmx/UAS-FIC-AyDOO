#include <iostream>
using namespace std;
void multiplica(int arre1[], int tam1, int arre2[], int tam2);
int main() {
   int m,n,i;
   // arreglo 01
   cin >> m;
   int a1[m];

   for (i=0; i<m; i++)
      cin >> a1[i];
  
  // arreglo 02
   cin >> n;
      int a2[n];

   for (i=0; i<n; i++)
      cin >> a2[i];

   if (m>n)
       multiplica(a1, m, a2, n);
   else  
       multiplica(a2, n, a1, m);

  
   return 0;
}

void multiplica(int arre1[], int tam1, int arre2[], int tam2){
   int i;

   cout << "Los elementos del vector resultante son:"<< endl;

   for (i=0; i < tam1; i++){
     if(i<tam2)
      cout << arre1[i] * arre2[i] << " ";
     else
      cout << arre1[i] << " ";
   }

   

}
