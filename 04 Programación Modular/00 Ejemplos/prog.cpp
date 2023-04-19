#include <iostream>
using namespace std;

// función que retorna la suma de 2 números
int suma (int a, int b){
    return a + b;
}

int main(){
    int x=5, y=4, z, k;
    z = suma(x, y);
    cout << "La Suma es " <<  z << endl;
    z = suma (67, 45);
    cout << "La Suma es " <<  z << endl;
    k = suma (y, 90);
    cout << "La Suma es " <<  k << endl;
    

  return 0;
} 
