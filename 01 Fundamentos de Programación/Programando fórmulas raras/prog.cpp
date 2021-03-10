#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double x, y, z, r;
    
    cin >> x >> y >> z; // entrada

    // proceso
    r = (x + x * (y + pow(z,2))) / ((x + M_PI) * (y + M_PI));

    // salida
    cout <<fixed<< setprecision(6) <<r<<endl;
    
    return 0;
}