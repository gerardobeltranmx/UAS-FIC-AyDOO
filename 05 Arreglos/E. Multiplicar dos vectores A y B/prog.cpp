#include <iostream>
using namespace std;

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
