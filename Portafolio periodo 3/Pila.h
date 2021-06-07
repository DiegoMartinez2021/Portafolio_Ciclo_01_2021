#include "Lista generica.h"
#include <string>

template <typename T>
class Pila : private Lista<T>{
	public:
		Pila();
		push(T item);
		T pop();
		bool estaPilaVacia();
		string pilaComoCadena();
};
	
template <typename T>
Pila<T>::Pila(){
	Lista<T> Lista;
}	

template <typename T>
Pila<T>::push(T item){
	this->adjuntar(item);
}

template <typename T>
T Pila<T>::pop(){
	return this->remover(this->tamanio() - 1);
}

template <typename T>
bool Pila<T>::estaPilaVacia(){
	return this->estaVacia();
}

template <typename T>
string Pila<T>::pilaComoCadena(){
	return this->comoCadena();
}




















