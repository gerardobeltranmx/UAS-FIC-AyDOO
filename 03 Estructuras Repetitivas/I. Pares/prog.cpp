#include <iostream>
using namespace std;

int main() {
  int N, i, valor, pares=0;
  cin >> N;

  for (i=0; i<N; i++){
    cin >> valor;
    if (valor % 2 == 0){
       cout << "[" << valor << "] " ;
       pares++;
    }
  }

  if (pares == 0)
       cout << ":(";

   return 0;
}
