#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int datos[1000];
    int numCasos, n, suma=0, cont=0, prom;
    double porcentaje;
    
    cin >> numCasos;
    for (int c=0; c <numCasos; c++ ){
        cin >>n;
        suma=0;
        for (int i=0; i<n ; i++ ){
            cin >> datos[i];
            suma+=datos[i];
        }
        prom = suma / n;
        cont=0;
        for (int i=0; i < n ; i++){
                if (datos[i]>prom)
                    cont++;
        }
        porcentaje = (double)cont / n * 100;
        
        cout <<fixed <<setprecision(3)<< porcentaje<<"%"<< endl;
    }
    return 0;
}