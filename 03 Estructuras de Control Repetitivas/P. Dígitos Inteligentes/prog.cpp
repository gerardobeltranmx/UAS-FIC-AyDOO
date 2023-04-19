#include <iostream>

using namespace std;

int main()
{
    int num, suma, digito;
    int L, R, N;
    
    cin >> N;
    
    
    for (int k=0; k<N; k++){
        suma =0;
        cin >> L >> R;
        
        for (int i=L; i<=R; i++){
            
            num = i;
     
            while (num > 0){
                
                digito = num % 10;
                suma = suma + digito;
                
                num = num / 10;
                
            }
        
        }    
    cout << suma << endl;

    }
 
 
    return 0;
}