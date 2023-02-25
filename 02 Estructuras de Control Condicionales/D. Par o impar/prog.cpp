#include <iostream>

using namespace std;

int main()
{
    int num;
  //  cout  << "Indicar el numero: ";
    
    cin >> num;

    if (num % 2 == 0){
        cout << "par" << endl;
    }
    else {
        cout << "impar" << endl; 
    }


    return 0;
}