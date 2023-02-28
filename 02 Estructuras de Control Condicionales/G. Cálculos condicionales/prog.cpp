#include <iostream>

using namespace std;

int main()
{
    int N, contar = 0;
    cin >> N;
    
    if ( N % 2 == 0 ){ 
         N = N / 2; // N/=2;
    }
    else {
        N = N + 1 ; // N++;
    }
    contar++;

    if (N >=100){
        N = N / 100;
        contar++;
    }
    else if ( N>=10  and N <=99){
        N= N / 10;
        contar++;
    }
    
    if (N % 3 == 0 ) {
        N = N - 1;
        contar++;
    }
    
    cout << N << " " << contar << endl;    
    
    return 0;
}