#ifndef RECTANGULO_RECTANGULO_H
#define RECTANGULO_RECTANGULO_H

class rectangulo{
	private:
		double base;
		double altura;
	public:
		rectangulo(double b, double h);
		double calculoArea();
		double calculoPerimetro();
		double getBase();
		double getAltura();
};
//Implementacion de los metodos
rectangulo::rectangulo(double b, double h){
	this->base = b;
	this->altura = h;
}
//Calcular area del rectangulo
double rectangulo::calculoArea(){
	return this->base * this->altura;
}
//calcular perimetro del rectangulo
double rectangulo::calculoPerimetro(){
	return 2 * (this->base * this->altura);
}
//Devolver base
double rectangulo::getBase(){
	return this->base;
}
//Devolver altura
double rectangulo::getAltura(){
	return this->altura;
}

#endif
































