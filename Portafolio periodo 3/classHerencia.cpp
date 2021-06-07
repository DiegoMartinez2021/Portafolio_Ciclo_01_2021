#include <iostream>
using namespace std;

class poligono{
    protected:
        double ancho, alto;
    public:
        void setValores(double a, double b){
            ancho = a;
            alto = b;
        }
};

class rectangulo: public poligono{
    public: 
        double area(){return ancho * alto;}
};

class triangulo: public poligono{
    public: 
        double area(){return (ancho * alto) / 2;}
};

int main(){
    rectangulo miRectangulo;
    triangulo miTriangulo;
    miRectangulo.setValores(3.5,8.2);
    miTriangulo.setValores(3.5,8.2);
    cout << "El area del rectangulo es: " << miRectangulo.area() << endl;
    cout << "El area del triangulo es: " << miTriangulo.area() << endl;
    return 0;
}



















