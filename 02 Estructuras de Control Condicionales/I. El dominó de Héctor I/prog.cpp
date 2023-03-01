#include<iostream>
using namespace std;
int main()
 {

    long N, K, mayor;
    long numFichas;

    cin >> N >> K;


    if (N > K){
        mayor = N;
    }
    else {
        mayor = K;
    }

    numFichas = (mayor + 2) * (mayor + 1) / 2;


    cout << numFichas << endl;


    return 0;
  }
f