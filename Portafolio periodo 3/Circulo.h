#ifndef CIRCULO
#define CIRCULO
#include <cmath>
const double PI = 3.14159265;

//Especificacion de la clase 
class circulo{
	private:
		double radio;
	public:
		circulo(double r);
		double getradio();
		double calculoArea();	
		double calculoDiametro();	
		double calculoPerimetro();	
};

//Implementacion del constructor
circulo::circulo(double r){
	this->radio = r;
}
//Implementacion de los metodos 
double circulo::getradio(){
	return this->radio;
}
//Calculo de area
double circulo::calculoArea(){
	return PI * pow(this->radio, 2);
}
//Calculo de diametro
double circulo::calculoDiametro(){
	return 2 * this->radio;
}
//Calculo de perimetro
double circulo::calculoPerimetro(){
	return 2 * PI * pow(this->radio, 2);
}
#endif

























