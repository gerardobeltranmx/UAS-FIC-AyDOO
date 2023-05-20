#include <iostream>
using namespace std;

int main()
{
    int N, C, pos;
    
    cin >> N;
    cin >> C;
    
    int vasos[N];
    
    for (int i=0; i< N;i++){
        vasos[i]=0;
    }
    
    for (int i=0; i< C; i++ ){
        cin >> pos;
        vasos[pos-1] = vasos[pos-1] + 1 ;
    }
    
    for (int i=0; i<N; i++){
        cout << vasos[i] << endl;
    }
    
    
    
    



    return 0;
}