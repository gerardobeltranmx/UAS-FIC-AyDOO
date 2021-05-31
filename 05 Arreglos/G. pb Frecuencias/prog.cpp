#include <iostream>
using namespace std;

int main() {
 
   int P, F, i, V;

   cin >> P >> F;

   int profes[P];

   for (i=0; i<P; i++) 
      profes[i]=0;

   for (i=0; i<F; i++){
       cin >> V;
       profes[V-1]++;
   }

   for (i=0; i<P; i++){
      cout << (i+1) << "-" << profes[i] << endl; 
   }

 
   return 0;
}
