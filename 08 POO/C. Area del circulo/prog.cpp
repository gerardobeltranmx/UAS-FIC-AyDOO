#include <iostream>
using namespace std;

class Circulo {
   private:
      double radio;
   public:
      void CambiarRadio(double r){
         radio = r;
      }
      double ObtenerArea(){
         double area;
         area = 3.14159 * radio;
      }
};

int main() {
   int radio;
   Circulo fig;
   cin >> radio;
   fig.CambiarRadio(radio);
   cout << fig.ObtenerArea()<< endl;
    
   return 0;
}
