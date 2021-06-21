#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char completo [80];
   char nombre[32] = "Luis";
   char apellidos [32] = "Beltran Lopez";
   /* Construye el nombre completo */
   strcpy ( completo, nombre ); // completo <- "Luis"
   strcat ( completo, " "); // completo <-"Luis "
   strcat ( completo, apellidos ); // completo <-"Luis Beltran Lopez"
   cout << "El nombre completo es: " << completo << endl;
   cout << "La longitud del nombre completo es: " << strlen(completo) << endl;
   return 0;
}
