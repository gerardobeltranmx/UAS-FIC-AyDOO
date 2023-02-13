#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   
   double cateto1, cateto2, hipotenusa;
   
   // cout << "Cateto 1: ";
   cin >>cateto1;
   
   // cout << "Cateto 2: ";
   cin >>cateto2;
   
   hipotenusa =sqrt(pow(cateto1,2) + pow(cateto2,2));
   
   cout << fixed << setprecision(2) << hipotenusa << endl;
   
  
    return 0;
}
