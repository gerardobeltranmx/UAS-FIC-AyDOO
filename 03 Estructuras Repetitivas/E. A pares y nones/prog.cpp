#include <iostream>
using namespace std;

int main() {
  int NumCartas,ValorCarta, i;
  int SumaAparicio=0, ContarAparicio=0;
  int SumaNonila=0, ContarNonila=0;
  int PromedioAparicio, PromedioNonila;
  cin >> NumCartas;

  for (i=0; i<NumCartas; i++){

     cin >> ValorCarta;

     if (ValorCarta % 2 == 0){ // Es par es para Aparicio
        SumaAparicio = SumaAparicio + ValorCarta;
        ContarAparicio = ContarAparicio + 1;
     }     
     else{ // Si es impar es para Nonila
        SumaNonila = SumaNonila + ValorCarta;
        ContarNonila = ContarNonila + 1;
     }  
  }
 
  PromedioAparicio =  SumaAparicio/ContarAparicio;
  PromedioNonila = SumaNonila/ContarNonila;
  
  if (PromedioAparicio>PromedioNonila)
       cout << "APARICIO\n";
  else if (PromedioNonila>PromedioAparicio)
       cout << "NONILA" << endl;     
  else
      cout << "EMPATE!" << endl;
   return 0;
}