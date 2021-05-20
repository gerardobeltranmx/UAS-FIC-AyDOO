#include <iostream>
using namespace std;

int main() {
 
 int arr[1000];
int N, i;

  cin >> N;
  // Lee un arreglo de N enteros
  for (i=0; i<N; i++){

     cin >> arr[i];
  }

  // Imprime un de N enteros
  for (i=N-1; i>=0; i--){

     cout << arr[i] << " ";
  }

 
  
   return 0;
}
