#include <iostream>
using namespace std;

double AreaCirculo(int radio);
int main() {
 
   int radio;
   double resultado;
   cin >> radio;

   resultado  = AreaCirculo(radio);
   cout << resultado  << endl;
   
   return 0;
}

double AreaCirculo(int radio){
   double area;
   area = 3.1416 * radio * radio;
   return area;
}
