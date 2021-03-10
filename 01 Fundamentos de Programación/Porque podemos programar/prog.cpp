#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    float x, y, k;
    
    cin >> x;
    
    k = ( x + pow(x, 2) ) / (5*x + 3);
    
    y = (k + x) * (k / (k + 2 * x) ) ;
    
    
    cout << fixed << setprecision(6) << y ; 
    

    
    return 0;
}