#include <iostream>

using namespace std;

int main()
{
    int hora, min, seg, segundos;
    
    cin >> hora >> min >> seg;
    
    segundos = hora * 3600 + min * 60 + seg;
    
    cout << segundos << endl;

    return 0;
}
