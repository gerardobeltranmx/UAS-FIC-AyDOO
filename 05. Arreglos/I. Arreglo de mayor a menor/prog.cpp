#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N=5;
    int datos[5];
    
    // entrada
    for (int i=0; i < N; i++){
        cin >> datos[i];
    }
    // ordena descendente
    sort(datos, datos + N, greater<int>());
    // salida
    for (int i=0; i < N; i++){
        cout << datos[i] << " ";
    }
    return 0;
}