#include <iostream>
using namespace std;

int Kelvin(int c);
int Fahrenheit(int c);
int Reaumur(int c);
void Temperaturas(int c);

int main() {

   int c;
   cin >> c;
//    cout << Kelvin(c) << " " << Fahrenheit(c) << " " << Reaumur (c) << endl;

   Temperaturas(c);

  return 0;
}

void  Temperaturas(int c){
  int k= c + 273;
  int  f= (1.8 * c) + 32;
  int r= c * 0.8;

  cout << k << " " << f << " " << r << endl;

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
 
