#include <iostream>

using namespace std;

int main()
{
    int N1, N2, mult;
    cin >> N1; // tamaño de primer arreglo
    int datos1[N1]; 
   
    // entrada a primer arreglo
    for (int i=0; i < N1; i++){
        cin >> datos1[i];
    }
   
    cin >> N2; // tamaño de segundo arreglo
    int datos2[N2];
    // entrada a segundo arreglo
    for (int i=0; i < N2; i++){
        cin >> datos2[i];
    }
    
    
    cout << "Los elementos del vector resultante son:"<< endl;
    
    if (N1>N2){ // primer arreglo mayor que segundo arreglo
        for (int i=0; i<N1; i++){
            if (i<N2)
                mult = datos1[i] * datos2[i];
            else
                mult = datos1[i];        
            cout << mult << " ";
        }
    }
    else{
        for (int i=0; i<N2; i++){
            if (i<N1)
                mult = datos1[i] * datos2[i];
            else
                mult = datos2[i];        
            cout << mult << " ";
        }
    
        
    }
    
    
    
    
    return 0;
    
    
    
}