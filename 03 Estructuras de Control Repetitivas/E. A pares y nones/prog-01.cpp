#include<iostream>
using namespace std;
int main()
{
    int N, dato;
    int pares=0, nones=0;
    int cuentaPares=0, cuentaNones=0;
    int promedioPares, promedioNones;
    cout << "Numero de datos: ";
    cin >> N;

    for (int i=0 ; i < N; i++){

        cin >> dato;
        if (dato % 2 == 0){
            pares = pares + dato;
            cuentaPares++;
        }
        else{
            nones = nones + dato;
            cuentaNones++;
        }
    }
    promedioPares = pares / cuentaPares;
    promedioNones = nones / cuentaNones;

    if (promedioPares > promedioNones){
        cout << "APARICIO"<< endl;
    }
    else if (promedioNones > promedioPares){
        cout << "NONILA" << endl;
    }
    else{
        cout << "EMPATE!" << endl;
    }
    return 0;
}
