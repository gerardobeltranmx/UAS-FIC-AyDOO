#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int N, i=1, resultado;
    
    //cout << "Indique la tabla: ";
    
    cin >> N;
     
     while(i<=10){
        resultado = N * i;
        cout << fixed<<right << setw(2)  << i << " x " 
             << setw(4) << N << " = " 
             << setw(5)<< resultado << endl;
        i++;
    }
    



    return 0;
}