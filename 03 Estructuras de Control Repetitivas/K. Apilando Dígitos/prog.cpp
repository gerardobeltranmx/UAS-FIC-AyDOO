#include<iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;

    for (int j=1; j <= N; j++){    
        for (int i=0; i < j; i++ ){
            cout << j;
        }
        cout << endl;
    }

    for (int j=N-1; j>0; j--){
        for (int i=0; i < j; i++){
            cout << j;
        }
        cout << endl;
    }


    return 0;
}
