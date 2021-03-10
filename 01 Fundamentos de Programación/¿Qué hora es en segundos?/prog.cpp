#include <iostream>

using namespace std;

int main()
{
    int H, M, S, totalSegundos;
    cin >> H;
    cin >> M;
    cin >> S;
    
    totalSegundos = H * 3600 + M * 60 + S;
    
    cout << totalSegundos;

    return 0;
}