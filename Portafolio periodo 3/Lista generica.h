#ifndef lista_generica_h
#define lista_generica_h
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename T>
class Lista{
private:
	int cuenta;
	int capacidad;
	T *items;
	void agrandar();
public:
	Lista(int capacidad);
	Lista();
	~Lista();
	Lista(const Lista &otra);
	bool estaVacia();	
	int tamanio();
	insertar(int indice, T item);
	void adjuntar(T item);
	T obtener(int indice);
	bool contiene(T item);
	T remover(int indice);
	string comoCadena();
};

template <typename T>
Lista<T>::Lista(int capacidad){
	cout << "Creando una lista vacia..."<<endl;
	this->cuenta=0;
	this->capacidad=capacidad;
	this->items = new T[100];
	cout << "La lista tiene capacidad para "<<this->capacidad<<" elementos"<<endl;
}
// constructor por defecto
template <typename T>
Lista<T>::Lista() : Lista(4) {};

// Destructor
template <typename T>
Lista<T>::~Lista(){
	cout << "Destruyendo la lista..."<<endl;
	delete items[100];
}

// Constructor a partir de otra lista
template <typename T>
Lista<T>::Lista(const Lista<T> &otra){
	cout << "Copiando una lista desde otra..."<<endl;
	this->cuenta = otra.cuenta;
	this->capacidad = otra.capacidad;
	this->items = new T[capacidad];
	for(int i=0; i < this->cuenta; i++){
		this->items[i] = otra.items[i];
	}
}

// Esta vacía?
template <typename T>
bool Lista<T>::estaVacia(){
	cout << "Comprobando si la lista esta vacia..."<<endl;
	return this->cuenta == 0;
}

// Tamanio de la lista
template <typename T>
int Lista<T>::tamanio(){
	cout << "Obteniendo el tamanio de la lista..."<<endl;
	return this->cuenta;
}

// Aumneto de tamaño de la lista
template <typename T>
void Lista<T>::agrandar(){
	cout << "Duplicando el tamanio de la lista..."<<endl;
	T *temp=this->items;
	this->capacidad *= 2;
	this->items = new T[capacidad];
	for(int i=0; i<cuenta; i++){
		this->items[i] = temp[i];
	}
	delete[] temp;
	cout << "La lista tiene capacidad para " << this->capacidad<<" Elementos"<<endl;
}

template <typename T>
int Lista<T>::insertar(int indice, T item){
	if(indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";
	if(this->cuenta >= this->capacidad) this->agrandar();
	// Desplazar elemento
	cout << "Insertando un elemento..."<<endl;
	for(int i= cuenta - 1; i>=indice; i--){
		cout << "Desplazando el elemnto "<<items[i]<<" del indice "<<i<<" al indice "<<(i+1)<<endl;
		this->items[i+1] = this->items[i];
	}
	// Insertar nuevo elemento
	cout << "Insertando elemento "<<item<<" en el indice "<<indice<<endl;
	this->items[indice] = item;
	// Incrementar la cuenta
	this->cuenta++;
}

// Adjunta (agregar un elemento al final)
template <typename T>
void Lista<T>::adjuntar(T item){
	this->insertar(this->cuenta, item);
}

// Obtener valor a partir del indice
template <typename T>
T Lista<T>::obtener(int indice){
	if(indice < 0 || indice >= this->cuenta) throw "Fuera de rango";
	if(this->estaVacia()) throw "La lista esta vacia";
	cout << "Recuperando elemnto en el indice "<<indice<<endl;
	return this->item[indice];
}

// Validar si el item esta en la lista
template <typename T>
bool Lista<T>::contiene(T item){
	for(int i=0; i<this->cuenta; i++){
		if(this->items[i]==item){
			return true;
		}
	}
	return false;
}

template <typename T>
T Lista<T>::remover(int indice){
	if(indice < 0 || indice >= this->cuenta) throw "Fuera de rango";
	if(this->estaVacia()) throw "La lista esta vacia";
	
	cout << "Removiendo el elemnto con indice "<<indice<<"..."<<endl;
	T valor = this->items[indice];
	for(int i=indice; i<cuenta - 1; i++){
		cout << "Desplazar elemnto "<<items[i]<<" del indice "<<(i+1)<<" al indice "<<i<<endl;
		this->items[i] = this->items[i+1];
	}
		this->cuenta--;
		return valor;
}

template <typename T>
string Lista<T>::comoCadena(){
	ostringstream s;
	s<<"[ ";
	for(int i=0; i<(this->cuenta); i++){
		s << this->items[i];
		if(i < (this->cuenta-1)){
			s << ", ";
		}
	}
	s << "] ";
	return s.str();
}

#endif








