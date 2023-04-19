#include<iostream>
#include<iomanip>

using namespace std;

double areaTriangulo (double base, double altura){
  double area;
  area = base * altura / 2;
  return area;
}
int main(){
    double area, base, altura;
    cin >> base;
    cin >> altura;

    area = areaTriangulo(base, altura);

    cout << fixed << setprecision(3) << area << endl;

    return 0;
}
