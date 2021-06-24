#include <iostream>
using namespace std;

int main() {
 
 int N, i;
 char pwd[100]; 
 bool valida = true;
 cin >> N; // entrada al numero de contraseña
// Recorre todas las N contraseñas
for (i=0; i<N; i++){
   // Lee una contraseña
   cin.getline(pwd,100);
   // Determina el tamaño de la contraseña
   len = strlen(pwd);
   if (len>=6 and len <=32){ // Evalua si cumple el tamaño requerido
      for (k=0;k<len and valida==true; k++){ // Recorreo la contraseña
         if (pwd[k]>='A' and pwd[k] <='Z' ){
               valido=true;
         }
         else 
            valido = false;

         if (pwd[k]>='a' and pwd[k] <='z'){
              valido=true; 
         }
         else
            valido=false;

         if (pwd[k]=>'0' and pwd[k]<='9' ){
              valido=true; 
         } 
         else
           valido=false;
      }

   }
   else
      valida=false;


}

   return 0;
}
