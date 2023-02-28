#include<iostream>
using namespace std;
int main()
 {

    int a,b,c;
    int menor, mayor;

    cout << "Indicar a, b y c: ";

    cin >> a >> b >> c;
    // Buscar el menor
    if (a < b and a < c){
        menor = a;
    }
    else if (b < a and b < c){
        menor = b;
    }
    else {
        menor = c;
    }
    // Buscar el mayor
    if (a > b and a > c ){
        mayor = a;
    }
    else if (b > a and b > c ){
        mayor = b;
    }
    else {
        mayor = c;
    }
    // Generamos la salida 
    cout << menor << endl;
    cout << mayor << endl;


    return 0;
  }
