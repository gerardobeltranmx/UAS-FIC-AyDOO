#include <iostream>
using namespace std;

class CuentaBancaria
{
   private:
      float saldo;  
      char nombre[40];

   public:
      void Retiro(float cantidad){
      saldo = saldo - cantidad;
      }
      void Deposito(float cantidad){
      saldo= saldo + cantidad;
      }
      float ObtenerSaldo( ){
      return saldo;
      }
};



int main() {

   CuentaBancaria micuenta;
   micuenta.Deposito(2000);
   micuenta.Retiro(500);
   micuenta.Retiro(20);
   micuenta.Deposito(600);
   cout << micuenta.ObtenerSaldo()<< endl;
   micuenta.Retiro(500);
   cout << micuenta.ObtenerSaldo()<< endl;
   

   CuentaBancaria micuenta2;
   micuenta2.Deposito(3000);
   micuenta2.Retiro(300);
   cout << micuenta2.ObtenerSaldo()<< endl;


   return 0;
}
