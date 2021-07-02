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
         area = 3.1416 * radio*radio;
         return area;
      }

      double ObtenerPerimetro(){
         double perimetro;
         perimetro = 2 * 3.1416 * radio;
         return perimetro;
      }
};

class Cilindro{
   private:
    double radio, altura;
   public:
   void CambiarDimension(double r, double a){
      radio  = r;
      altura = a;
   }
   double ObtenerVolumen (){
      Circulo base;
      double volumen;
      base.CambiarRadio(radio);
      volumen = base.ObtenerArea()*altura;
      return volumen;
   }
   double ObtenerArea(){
      Circulo base;
      base.CambiarRadio(radio);
      double area;
            area = 2*base.ObtenerArea() + base.ObtenerPerimetro()*altura;
      return area;
   }
   

};

int main() {
  double radio, altura;
  cin >> radio;
  cin >> altura;

  Cilindro tanque;
  tanque.CambiarDimension(radio, altura);
  cout << fixed<<setprecision(2) << "AREA="<< tanque.ObtenerArea() << endl;
  cout << fixed<< setprecision(2)<< "VOLUMEN="<<tanque.ObtenerVolumen()<< endl;

   return 0;
}
