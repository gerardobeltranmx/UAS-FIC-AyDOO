#include <iostream>
using namespace std;

class Rectangulo {
   private:
     int b, a;
   public:
      void dimensionar(int base, int altura){
         b= base;
         a= altura;
      }
      int area(){
         return b * a;
      }
};

int main() {
   int b, a;
   Rectangulo fig;
   cin >> b >> a; 
   fig.dimensionar(b,a);
   cout << fig.area();
   return 0;
}
