#include <iostream>
using namespace std;

int main() {
    int cont=0, N ;

    cin >> N;

    if (N % 2 == 0){
        N = N / 2;
        cont = cont + 1;
    }    
    else{
        N = N + 1;    
        cont = cont + 1;
    }

    if (N>=100){
        N = N / 100;
        cont = cont + 1;
    }
    else if(N>=10){
        N = N / 10;
        cont = cont + 1; 
    }
    if ( N % 3 == 0){
        N = N - 1;
        cont = cont + 1;
    }    

    cout << N << " " << cont << endl;

  
 
  
   return 0;
}
