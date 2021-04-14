#include <iostream>
using namespace std;

int main() {
  int N, i, resultado;

  cin >> N;

  for (i=1; i<=10; i++){
      resultado = i * N;
      cout << N <<" X " << i << " = " << resultado<< endl;
  }
   return 0;
}
