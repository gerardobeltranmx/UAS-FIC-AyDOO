#include<iostream>
using namespace std;
int main(){
    int datos [1000];
    int N;
    cin >> N;
    for (int i=0; i < N ; i++){
        cin >> datos[i];
    }

    // recorrido inverso
    for (int i=N-1; i>=0; i--){
        cout << datos[i] << " ";
    }

    return 0;
}
