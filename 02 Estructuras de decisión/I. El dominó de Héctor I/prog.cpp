#include <iostream>
using namespace std;

int main() {
  long N, K, m, fichas;

  cin >> N >> K ; 
  
  if (N > K)
     m =N;
  else 
     m = K;   


    fichas = (m + 1) * (m + 2) / 2 ;

    cout << fichas << endl; 

   return 0;
}
