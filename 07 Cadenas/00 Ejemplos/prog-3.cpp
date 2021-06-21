// Lee el contenido de una cadena y la convierta a may sculas (cin.getline)
#include <iostream>
#include <cstring>
using namespace std;
int main() {
char cadena[80];
cout << "Escriba una cadena: ";
cin.getline (cadena, 80);
int i=0;
while (cadena[i]!='\0'){
if (cadena[i]>='a' && cadena[i]<='z')
cadena[i]-=32;
i++;
}
cout << "La cadena es: " << cadena << endl;
return 0;
}