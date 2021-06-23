#include <iostream>
#include <cstring>

using namespace std;

int main() {
   
   char S[81];
   int len, i, numVocales=0, numConsonantes;
   cin.getline(S,80);
 
   len = strlen(S);
   for (i=0; i<len; i++){

      switch (S[i]){

         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
                  numVocales++;
                  break;
      }
   }
   numConsonantes = len - numVocales;

   cout << numConsonantes << " " << numVocales << endl;


   return 0;
}
