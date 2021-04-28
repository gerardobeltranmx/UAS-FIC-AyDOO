#include <iostream>
using namespace std;

int main() {
 
  int A, B, N, i;
  long total=0;

  cin  >> A  >> B >> N;

  //total = A;
 
  for (i=0; i < N; i++){
     total  = total + (A + i * B);
  }

  cout <<  total <<endl;




   return 0;
}
