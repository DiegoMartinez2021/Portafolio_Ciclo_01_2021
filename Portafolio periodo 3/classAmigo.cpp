#include <iostream>
using namespace std;

class cuadrado;

class rectangulo{
    double ancho, alto;
    public:
        double area(){return (ancho * alto);}
        void convertir(cuadrado a);
};

class cuadrado{
    friend class rectangulo;  
    private:
        double lado;
    public:
        cuadrado(double a) : lado(a) {}
};

void rectangulo::convertir(cuadrado a){
    ancho = a.lado;
    alto = a.lado;
}

int main(){
    rectangulo r1;
    cuadrado c1(4);
    r1.convertir(c1);
    cout << r1.area();
    return 0;
}
