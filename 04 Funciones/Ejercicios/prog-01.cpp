#include <iostream>
using namespace std;

int suma(int a, int b);
int main() {
 
 int x = 10;
 int y = 20;
 int z;
 z = suma(x, y);
  
 cout << z<< endl;

 z = suma (100, 345);

 cout << z<< endl;

 cout << suma(56, 45) << endl;
  
 return 0;
}

int suma (int a, int b){
   int c;
   c = a + b;
   return c;
}
