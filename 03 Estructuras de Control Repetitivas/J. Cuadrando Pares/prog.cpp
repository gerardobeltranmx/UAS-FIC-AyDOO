    #include <iostream>

using namespace std;

int main()
{
    int par=0, digito, t;
    cin >> t;
    
    while ( t > 0 ){
        digito = t % 10;

        if (digito % 2 == 0 ){ 
           par++;
        }

        t = t / 10;


    }
    
    if (par % 2 == 0){
        cout << "SI" << endl;
    }
    else
      cout << "NO" << endl;
    
    return 0;
}