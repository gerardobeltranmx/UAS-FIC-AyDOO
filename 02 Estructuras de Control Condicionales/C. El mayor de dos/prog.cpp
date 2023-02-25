#include <iostream>

using namespace std;

int main()
{
    int a, b;
    //cout <<"Escriba el valor de a: "; 
    cin  >> a;
    //cout << "Escriba el valor de b: ";
    cin >> b;

    if ( a > b ){ 
       cout << a << endl;
    }
    else if ( b > a ){
       cout << b << endl;
    }
    else {
       cout << a << endl;
    }
    
    return 0;
}