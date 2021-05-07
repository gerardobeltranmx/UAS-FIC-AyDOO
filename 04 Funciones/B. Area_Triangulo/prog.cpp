#include <iostream>
#include <iomanip>
using namespace std;

double AreaTriangulo (double b, double a);
int main() {
 
  double base, altura, area;

  cin >> base;
  cin >> altura;
 
  area = AreaTriangulo(base, altura);

  cout << fixed << setprecision(3)<<area;
   return 0;
}

double AreaTriangulo (double b, double a){
   double area = b * a / 2;
   return area;
}