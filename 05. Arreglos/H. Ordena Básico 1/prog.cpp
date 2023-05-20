#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    int datos[100];
    
    cin >> N;
    // entrada
    for (int i=0; i < N; i++){
        cin >> datos[i];
    }

    sort(datos, datos + N);
    
    for (int i=0; i < N; i++){
        cout << datos[i] << endl;
    }


    return 0;
}