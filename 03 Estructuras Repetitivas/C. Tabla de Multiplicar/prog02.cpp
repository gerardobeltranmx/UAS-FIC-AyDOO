#include <iostream>
using namespace std;

int main() {
  int N, i=1, resultado;

  cin >> N;

  while (i<=10){
      resultado =  N * i;
      cout << N <<" X " << i << " = " << resultado << endl;
      i++;
  }
   return 0;
}
