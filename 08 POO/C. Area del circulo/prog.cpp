#include <iostream>
#include <iomanip>
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
         area = 3.14159 * radio*radio;
         return area;
      }
};

int main() {
   int radio;
   Circulo fig;
   cin >> radio;
   fig.CambiarRadio(radio);
   cout << fixed << setprecision(2)<<fig.ObtenerArea()<< endl;
   
   return 0;
}
