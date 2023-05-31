#include <iostream>

using namespace std;

int main()
{
    int N, dato;
    cin >> N;
    
    int mat[N][N];
    
    for (int i=0; i<N; i++  ){
        for (int j=0; j<N; j++){
            cin >> mat[i][j];     
        }
    }
    dato = mat[0][0];
    bool enc = true;
    for (int i=1; i < N and enc==true; i++){
      if (mat[i][i]!=dato) 
            enc=false;
    }
    
    if (enc==true)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;
    
    
    
    return 0;
}