#include <iostream>

using namespace std;

int main()
{

    int N, resultado;
    
    //cout << "Indique la tabla: ";
    
    cin >> N;
    
    for (int i=1; i<=10; i++){
        
        resultado = N * i;
        cout << N << " X " << i << " = " << resultado << endl;
        
    }
    



    return 0;
}