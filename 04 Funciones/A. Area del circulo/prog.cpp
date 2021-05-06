#include <iostream>
#include <iomanip>
using namespace std;

double AreaCirculo(double radio);
int main() {
 
   double r;
   double resultado;
   cin >> r;

   resultado  = AreaCirculo(r);
   cout << fixed<<setprecision(2)<< resultado  << endl;
   
   return 0;
}

double AreaCirculo(double radio){
   double area;
   area = 3.1416 * radio * radio;
   return area;
}
