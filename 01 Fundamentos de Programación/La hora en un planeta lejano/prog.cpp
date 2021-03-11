#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char const *argv[])
{
    int seg, segDia, segHora;
    int dias, restoSeg, horas, minutos, segundos;
    
    cin >> seg;
    
    segDia = 42000;
    segHora = 3500;

    dias = seg / segDia;

    restoSeg = seg % segDia;

    horas = restoSeg / segHora;

    restoSeg = restoSeg % segHora;

    minutos = restoSeg / 50;

    segundos = restoSeg % 50;

    cout << dias << " " << horas<< " " << minutos << " " << " " << segundos<< endl; 


    return 0;
}