#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double area, base, altura;

    cin >> base;
    cin >> altura;

    area = base * altura / 2;
    
    cout << fixed << setprecision(3) << area;


    return 0;
}