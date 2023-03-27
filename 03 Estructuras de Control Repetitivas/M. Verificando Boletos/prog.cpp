#include<iostream>
using namespace std;
int main()
 {
    int N, M, digito;
    int  sumaDer=0, sumaIzq=0;
  

    cin >> N;

    M = N / 2;
    for (int i=0 ; i<N; i++){
      cin >> digito;
      if (i < M)
        sumaIzq = sumaIzq + digito;
      else  
        sumaDer = sumaDer + digito;    
    }
   
    if (sumaIzq == sumaDer)
      cout << sumaIzq << " " << 1 << endl;
    else
      cout << sumaIzq+sumaDer << " " << 0 << endl;
    return 0;
  }
