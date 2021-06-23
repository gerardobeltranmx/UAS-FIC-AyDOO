#include <iostream>
#include <cstring>
using namespace std;

int main() {
 
 char cadena[1000];
 int i, len;

 cin.getline(cadena, 1000);

 len = strlen(cadena);

 for (i=len; i>=0; i--)
   cout << cadena[i];  


   return 0;
}
