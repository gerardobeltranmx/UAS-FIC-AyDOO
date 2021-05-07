#include <iostream>
#include <iomanip>
using namespace std;

double SuperficieEsfera(double r);
double VolumenEsfera(double r);
int main() {
 
  double radio, superficie, volumen;

  cin >> radio;
  
  superficie = SuperficieEsfera (radio);

  volumen = VolumenEsfera(radio);
  
  cout << fixed << setprecision(2)<<"Volumen: " << volumen << "Superificie:" << superficie<< endl;

   return 0;
}
double SuperficieEsfera(double r){
   double s;
   s = 4 * 3.1416 * r * r;
   return s;
}
double VolumenEsfera(double r){
   double v;
   v = 4 * r * r * r / 3;

}


