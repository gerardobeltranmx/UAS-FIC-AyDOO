#include<iostream>
using namespace std;
int main()
 {
    int N;
    cin >> N;

    cout << N << " ";
    while (N!=1){

      if (N % 2 == 0) // es par?
          N = N / 2;
      else // en caso de ser impar
          N = N * 3 + 1;

      cout << N << " ";

    }



    return 0;
  }
