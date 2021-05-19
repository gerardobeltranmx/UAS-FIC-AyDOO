#include <iostream>
#include <iomanip>
using namespace std;
double AreaBase(float radio);
double AreaLateral(float radio, float altura);
double AreaTotal (float radio, float altura);
double Volumen(float radio, float altura);

int main() {
   double r, h, Area, Volumen;

   cin >> r;
   cin >> h;

    Area = AreaTotal(r,h);

    Volumen = VolumenTotal(r,h);

    cout << "AREA="<< fixed<< setprecision(2)<<Area;

    cout << "VOLUMEN="<< fixed<< setprecision(2)<<Volumen;

   return 0;
}

double AreaBase(float radio){
    double AB = 3.1416 * radio * radio;
    return AB;
}
double AreaLateral(float radio, float altura){
    double AL = 2 * 3.1416 * radio * altura;
    return AL;
}

double AreaTotal (float radio, float altura){
    double AT = AreaLateral(radio, altura) + 2 * AreaBase(radio);
   return AT;
}

double VolumenTotal(float radio, float altura){
  double V = AreaBase(radio) * altura;
  return V;
}
