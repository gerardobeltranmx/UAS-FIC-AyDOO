#include <iostream>

using namespace std;

int main()
{

    int mes;
    
   // cout << "Indicar el mes: " ;
    cin >> mes;
    
    switch( mes ){
        case 3:
        case 4:
        case 5:
            cout << "PRIMAVERA" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "VERANO" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "OTONIO" << endl;
            break;
        case 12:
        case 1:
        case 2:
            cout << "INVIERNO" << endl;
            break;
        default :
            cout << "ERROR" << endl;
            break;
    }
    
    

    return 0;
}