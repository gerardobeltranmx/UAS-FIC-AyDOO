#include <iostream>

using namespace std;

int main() {
 
    int l1, l2, l3;

    cin >> l1 >> l2 >> l3;

    if ( l1 == l2 && l1 == l3 )
        cout << "equilatero\n";
    else if ( l1 == l2 || l2 == l3 || l3 == l1 )
        cout << "isosceles" << endl;
    else    
        cout << "escaleno" << endl;    
  
   return 0;
}