#include <iostream>

using namespace std;

int main()
{
    int n, m, entero, residuo;
   // cout << "valores para n y m: ";
    cin >> n >> m;
    
    entero = n / m;
    residuo = n % m;
    
    if (residuo == 0){
        cout << entero << endl;
    }
    else {
        cout << entero << " " << residuo << "/" << m << endl;
    }
    
    
    
    
    

    return 0;
}