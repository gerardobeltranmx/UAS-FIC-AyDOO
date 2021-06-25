#include <iostream>
#include <cstring>
using namespace std;

int main() {
 
 int N, i,k, len, contMay, contMin, contDig, contOtros;
 char pwd[100]; 
 bool valido = true;
 cin >> N; // entrada al numero de contraseña
 getchar();
// Recorre todas las N contraseñas
for (i=0; i<N; i++){
   // Lee una contraseña
   cin.getline(pwd,100);
   contMay=0;
   contMin=0;
   contDig=0;
   contOtros=0;
   // Determina el tamaño de la contraseña
   len = strlen(pwd);
   if (len>=6 and len <=32){ // Evalua si cumple el tamaño requerido
      for (k=0;k<len ; k++){ // Recorreo la contraseña
         if (pwd[k]>='A' and pwd[k] <='Z' )
               contMay++;
         else if (pwd[k]>='a' and pwd[k] <='z')
                  contMin++;
         else if (pwd[k]>='0' and pwd[k]<='9' ){
              contDig++; 
         } 
         else
           contOtros++;
      }
   }
         if (contMay>0 and contMin>0 and contDig>0 and contOtros==0)
               cout << pwd << ":" << " Valido"<< endl;
         else
            cout << pwd << ":" << " Invalido"<< endl ;
}

 return 0;
}