#include <iostream>

using namespace std;

int main()
{

    int dolares, tipoCambio, pesos;
    //cout << "Num. de dolares: ";
    cin >> dolares;
    //cout << "Tipo de cambio: ";
    cin >> tipoCambio;
    
    pesos = dolares * tipoCambio;
    
    cout << pesos << endl;

    return 0;
}
