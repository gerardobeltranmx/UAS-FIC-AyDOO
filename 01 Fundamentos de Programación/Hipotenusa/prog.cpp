#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double a, b, c, x;

    cin >> a;
    cin >> b;   
    x = pow(a,2) + pow(b, 2);
    c = sqrt(x);

    cout << fixed << setprecision(2) << c << endl;

    return 0;
}