#include <iostream>
using namespace std;

int main() {



   return 0;
}

int Kelvin(int c){
  int k= c + 273;
  return k;
}

int Fahrenheit(int c){
 int  f= (1.8 * c) + 32;
 return f; 
}

int Reaumur(int c){
  int r= c * 0.8;
  return r;
}
