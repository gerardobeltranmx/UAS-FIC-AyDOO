#include <iostream>
#include <iomanip>
using namespace std;
double AreaBase(float radio);
double AreaLateral(double radio, double altura);
double AreaTotal (double radio, double altura);
double VolumenTotal(double radio, double altura);

int main() {
   double r, h, Area, Volumen;

   cin >> r;
   cin >> h;

    Area = AreaTotal(r,h);

    Volumen = VolumenTotal(r,h);

    cout << "AREA="<< fixed<< setprecision(2)<<Area<<endl;

    cout << "VOLUMEN="<< fixed<< setprecision(2)<<Volumen<< endl;

   return 0;
}

double AreaBase(double radio){
    double AB = 3.1416 * radio * radio;
    return AB;
}
double AreaLateral(double radio, double altura){
    double AL = 2 * 3.1416 * radio * altura;
    return AL;
}

double AreaTotal (double radio, double altura){
    double AT = AreaLateral(radio, altura) + 2 * AreaBase(radio);
   return AT;
}

double VolumenTotal(double radio, double altura){
  double V = AreaBase(radio) * altura;
  return V;
}
