#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int mat1[N][N], mat2[N][N], mat3[N][N];
    // Entra matriz 1
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            cin >> mat1[i][j];
// Entra matriz 2
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            cin >> mat2[i][j];
    // sumar matrices
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            mat3[i][j]=mat1[i][j] +mat2[i][j];
    // salida de matriz 3
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
