#include <iostream>
using namespace std;

int main() {
 
  
 
  
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

double Volumen(float radio, float altura){
  double V = AreaBase(radio) * altura;
  return V;
}
