#include <iostream>
using namespace std;

class numeros{
  private:
   int N;
   int num[100];
   int i;
  public:
    void iniciar(int datos[], int K){

      N=K;
      for (i=0; i<N; i++){
         num[i]=datos[i];
      }

    }
    int pares(){
        int cont=0;
         for (i=0; i<N; i++)
               if (num[i]%2==0)
                   cont++;

        return cont;           
    }
    int impares(){
        int cont=0;
         for (i=0; i<N; i++)
               if (num[i]%2!=0)
                   cont++;
        return cont;           
         
    }

};


int main() {
 
   int N,i;
   numeros info; 

   cin >> N;

   int datos[N];

   for (i=0; i<N; i++){
       cin >> datos[i];
   }
   info.iniciar(datos, N);
   cout << info.pares() << " " << info.impares()<< endl;


   
   return 0;
}
