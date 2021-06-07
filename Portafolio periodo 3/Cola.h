#include "Lista generica.h"
#include <string>

template <typename T>
class Cola : private Lista<T>{
	public:
		Cola();
		enqueue(T item);
		T dequeue();
		bool estaColaVacia();
		string colaComoCadena();
};

template <typename T>
Cola<T>::Cola(){
	Lista<T> Lista;
}

template <typename T>
Cola<T>::enqueue(T item){
	this->adjuntar(item);
}

template <typename T>
T Cola<T>::dequeue(){
	return this->remover(0);
}

template <typename T>
bool Cola<T>::estaColaVacia(){
	return this->estaVacia();
}

template <typename T>
string Cola<T>::colaComoCadena(){
	return this->comoCadena();
}















