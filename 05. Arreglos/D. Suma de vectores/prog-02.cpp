#include<iostream>
using namespace std;
int main(){

int N;
int a1[100], a2[100], a3[100];
// Entrada al cantidad de elementos de los arreglos
cin >> N;
// Entrada a datos del primer arreglo
for (int i=0; i < N; i++){
    cin >> a1[i]; 
}
// Entrada a datos del segundo arreglo
for (int i=0; i < N; i++){
    cin >> a2[i]; 
    a3[i] = a1[i] + a2[i];
       cout << a3[i] << " ";
}
// suma ambos arreglos
//for (int i=0; i < N; i++){
//    a3[i] = a1[i] + a2[i];
//}
// Generamos salida de a3
//for (int i=0; i <N; i++){
//  cout << a3[i] << " ";
//}
cout << endl;









    return 0;
}
