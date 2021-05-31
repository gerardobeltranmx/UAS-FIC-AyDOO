#include <iostream>
using namespace std;

int main() {
 
 int N, C, i, vaso;


 cin >> N >> C;

int vasos[N];

for (i=0; i<N; i++)
    vasos[i]=0;

for (i=0; i<C; i++){
     cin >> vaso;
     vasos[vaso-1]++;
}

  
 for (i=0; i<N; i++){
    cout << vasos[i]<< endl;
 }
  
   return 0;
}
