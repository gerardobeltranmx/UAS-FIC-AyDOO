#include <iostream>
using namespace std;

int main() {
    int a, b, c, mayor, menor;
    cin >> a >> b >> c; 
    if ( a>b and a > c){ // es mayor la a?
        mayor = a;
        if (b < c)
            menor = b;
        else
            menor = c;        
    }
    else if (b > a and b > c){ // es mayor la b?
        mayor = b;
        if (a < c)
          menor = a;
        else  
          menor = c;    
    }
    else{   // el mayor es c!
        mayor = c;
        if (a < b)
             menor = a;
        else
            menor = b;         
    }
    cout << menor << endl << mayor<< endl;
    return 0;
}
