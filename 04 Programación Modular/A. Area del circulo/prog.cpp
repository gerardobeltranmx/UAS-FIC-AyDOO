#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double areaCirculo (double radio){
  double area;
  area = M_PI * radio * radio;
  return area;
}

int main()
 {
    int r, a;
    cin >> r;
    a = areaCirculo(r);

    cout << fixed << setprecision(2) 
         << a << endl;

    return 0;
  }
