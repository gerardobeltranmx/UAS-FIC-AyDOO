#include <iostream>

using namespace std;

#define SEG_DIA  42000 //50 * 70 * 12
#define SEG_HORA 3500  //50 * 70
#define SEG_MIN 50

int main()
{
    int dias, horas, min, seg;
    //cout << "Numero de segundos: ";
    cin >> seg;
    
    
    dias = seg / SEG_DIA;
    seg  = seg % SEG_DIA;

    horas = seg / SEG_HORA;
    seg = seg % SEG_HORA;
    
    min = seg / SEG_MIN;
    seg = seg % SEG_MIN;
    
cout << dias << " " << horas << " " << min << " " << seg << endl;

    return 0;
}
