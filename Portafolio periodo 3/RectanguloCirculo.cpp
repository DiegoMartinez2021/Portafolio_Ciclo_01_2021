#include<iostream>
#include "Rectangulo.h"
#include "Circulo.h"
using namespace std;

int main(int argc, char** argv){
	//Crear 2 objetos de tipo rectagulos
	rectangulo r1(3,2);
	rectangulo r2(2.0,4.0);
	//Crear 2 objetos de tipo rectagulos
	circulo c1(6);
	circulo c2(1.5);
	
	//Imprimir el area de los rectangulos
	cout << "Area de R1: " << r1.calculoArea() << endl;
	cout << "Area de R2: " << r2.calculoArea() << endl;
	//Imprimir el perimetro de los rectangulos
	cout << "Perimetro de R1: " << r1.calculoPerimetro() << endl;
	cout << "Perimetro de R2: " << r2.calculoPerimetro() << endl;
	
	//Imprimir los elementos del circulo 1
	cout << "\nRadio del circulo 1: " << c1.getradio() << endl;
	cout << "Diametro = " << c1.calculoDiametro();
	cout << ", area = " << c1.calculoArea();
	cout << ", perimetro = " << c1.calculoPerimetro();
	
	//Imprimir los elementos del circulo 2
	cout << "\n\nRadio del circulo 2: " << c2.getradio() << endl;
	cout << "Diametro = " << c2.calculoDiametro();
	cout << ", area = " << c2.calculoArea();
	cout << ", perimetro = " << c2.calculoPerimetro();
	cout << endl;
}
