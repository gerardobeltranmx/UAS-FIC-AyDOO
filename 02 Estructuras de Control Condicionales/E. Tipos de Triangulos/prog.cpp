/* Solucion al problema 
 E. Tipos de Triangulos */
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;

    // entrada de lados del triangulo    
    //cout << "Lados del triangulo: ";
    cin >> x >> y >> z; 

    if ( x==y and x==z ){
        cout << "equilatero" << endl;
    }
    else if (x==y or y==z or z==x){
        cout << "isosceles"<< endl;
    }
    else {
        cout << "escaleno"  << endl;
    }
    
    return 0;
}