#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, x2, r1, r2, r3;
    
    //cout << "Indicar el valor de x: ";
    cin >> x;
    x2 = pow (x,2);
    
    r1 = x + x2;
    r2 = 5 * x + 3;
    r3 = r1 / r2;
    
    y = (r3 + x) * (r3/(r3 + 2*x)) ;
    
    cout << y;

    return 0;
}
