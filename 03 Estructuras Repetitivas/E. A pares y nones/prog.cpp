#include <iostream>
using namespace std;

int main() {
  int NumCartas,ValorCarta, i;
  int SumaAparicio=0, ContarAparicio=0;
  int SumaNonila=0, ContarNonila=0;
  cin >> NumCartas;

  for (i=0; i<NumCartas; i++){

     cin >> ValorCarta;

     if (ValorCarta % 2 == 0){
        SumaAparicio = SumaAparicio + ValorCarta;
        ContarAparicio = ContarAparicio + 1;
     }     
     else{
        SumaNonila = SumaNonila + ValorCarta;
        ContarNonila = ContarNonila + 1;
     } 

  }
 
  
   return 0;
}
