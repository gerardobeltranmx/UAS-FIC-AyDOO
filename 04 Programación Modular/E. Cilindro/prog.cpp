#include<iostream>
#include<iomanip>

using namespace std;

#define PI 3.1416

double areaCirculo (double radio){
    double area;
    area = PI * radio * radio;
}
double perimetroCirculo(double radio){
    double perimetro ;
    perimetro = 2 * PI * radio;
    return perimetro;
}
double areaRectangulo (double lado1, double lado2){
    double area;
    area = lado1 * lado2;
    return area;
}
double areaCilindro (double radio, double altura){
    double area;
    area = 2 * areaCirculo(radio);
    area = area +  perimetroCirculo(radio) * altura;
    return area;
}
double volumenCilindro (double radio, double altura){
    double volumen;
    volumen = areaCirculo(radio) * altura;
    return volumen;
}

int main(){
    double r, a, volumen, area;
    cin >> r;
    cin >> a;
    area = areaCilindro(r, a);
    volumen = volumenCilindro(r, a);
    cout <<fixed << setprecision(2)<< "AREA=" << area << endl;
    cout <<fixed << setprecision(2)<< "VOLUMEN=" << volumen << endl;
 
    return 0;
}
