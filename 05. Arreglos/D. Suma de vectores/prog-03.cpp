#include<iostream>
using namespace std;
int main(){

int N;
int a1[100], a2[100], a3[100];
int dato, suma=0;
// Entrada al cantidad de elementos de los arreglos
cin >> N;
// Entrada a datos del primer arreglo
for (int i=0; i < N; i++){
    cin >> a1[i]; 
}
// Entrada a datos del segundo arreglo
for (int i=0; i < N; i++){
    cin >> dato; 

    suma = a1[i] + dato;
       cout << suma << " ";
}

cout << endl;









    return 0;
}
