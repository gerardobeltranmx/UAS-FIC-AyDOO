#include <iostream>
using namespace std;

class CuentaBancaria
{
   private:
      float saldo;  
      char nombre[40];

   public:
   
      void Retiro(float cantidad){
      saldo-=cantidad;
      }
      void Deposito(float cantidad){
      saldo+=cantidad;
      }
      float ObtenerSaldo( ){
      return saldo;
      }
};



int main() {

   CuentaBancaria micuenta;
   micuenta.Deposito(2000);
   micuenta.Retiro(500);
   cout << micuenta.ObtenerSaldo()<< endl;

   return 0;
}
