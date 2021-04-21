#include <iostream>
using namespace std;

int main() {
 
  short N;
  int i,j; 
  cin >> N;

  for (i=1; i<=N; i++){
     for (j=1; j<=i; j++){
       cout << i;
     } 
     cout << endl;
  }
  for (i=N-1; i>=1; i--){
     for (j=1;j<=i; j++){
        cout << i ;   
     }
      cout << endl;  
  }

  
   return 0;
}
