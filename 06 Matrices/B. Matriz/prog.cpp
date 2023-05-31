#include<iostream>
using namespace std;
int main(){
    int F, C;
    cin >> F >> C; // entrada
    int mat[F][C]; // la dimension de la matriz
    // Entrada de datos a la matrz
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            cin >> mat[i][j];
        }
    }
    // salida de datos de la matriz del 
    // ultima fila a la primera
    for (int i=F-1; i>=0; i--){
        for (int j=0; j<C; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }







    return 0;
}
