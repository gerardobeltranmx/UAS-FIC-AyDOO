#include <iostream>
using namespace std;

int sumatoria(int datos[], int N){
    int suma=0;
    for (int i=0; i < N ; i++)    
       suma = suma + datos[i]; // suma += datos[i]
 
    return suma;
}
int promedio (int datos[], int N){
    int suma, promedio;
    suma = sumatoria(datos, N);
    promedio = suma / N;
    return promedio;
}

int main(){
    int N, cont=0, suma =0, prom;
    int datos[100];
    
    cin >> N;
    
    for (int i=0; i<N; i++){
        cin >> datos[i];
    }
    
    prom = promedio(datos, N);
    
    for(int i=0; i < N ; i++){
    
        if (datos[i]>prom)
            cont ++; // cont = cont + 1
    }
    
    cout << cont << endl;

    return 0;
}