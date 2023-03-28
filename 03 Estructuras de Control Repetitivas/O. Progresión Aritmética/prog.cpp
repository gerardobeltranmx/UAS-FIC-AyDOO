#include<iostream>
using namespace std;
int main()
 {

  int A, B, N, termino;

  long suma=0;

  cin >> A >> B >> N;

  for (int i=0; i <N; i++){

    termino = A + i * B;

    suma = suma + termino;
  }

  cout << suma << endl;



    return 0;

  }
