#include <iostream>
using namespace std;

int main() {
    int cont=0, N ;

    cin >> N;

    if (N % 2 == 0){
        N = N / 2;
        cont++;
    }    
    else{
        N = N + 1;    
        cont++;
    }

    if (N>=100){
        N = N / 100;
        cont++;
    }
    else if(N>=10){
        N = N / 10;
        cont++; 
    }
    if ( N % 3 == 0){
        N = N - 1;
        cont++;
    }    

    cout << N << " " << cont << endl;

  
 
  
   return 0;
}
