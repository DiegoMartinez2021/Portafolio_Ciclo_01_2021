#ifndef LISTA_ENTEROS_H
#define LISTA_ENTEROS_H
#include<string>
#include<sstream>
#include<iostream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

class listaEnteros;

class nodoLista{
	friend class listaEnteros;
	private:
		int item;
		nodoLista *siguiente;
	public:
		nodoLista(int item) : item(item), siguiente(0) { }
};

class listaEnteros{
	private:
		int cuenta;
		nodoLista *cabeza;
		nodoLista *obtenerNodo(int indice);
	public:
		listaEnteros();
		listaEnteros(const listaEnteros &otra);
		~listaEnteros();
		bool estaVacia();
		int tamanio();
		void insertar(int indice, int item);
		void adjuntar(int item);
		int obtener(int indice);
		bool contiene(int item);
		int remover(int indice);
		string comoCadena();
};

// Construccion de la lista
listaEnteros::listaEnteros(){
	cout << "creando una lista vacia..."<<endl;
	this->cuenta = 0;
	this->cabeza = 0;
}

// Construccion de una lista a partir de otra lista
listaEnteros::listaEnteros(const listaEnteros &otra){
	cout << "Copiando una lista desde otra..."<<endl;
	this->cuenta = 0;
	this->cabeza = 0;
	for(nodoLista *actual = otra.cabeza; actual != 0; actual = actual->siguiente){
		this->adjuntar(actual->item);
	}
}

// Creando el Destructor
listaEnteros::~listaEnteros(){
	cout << "Destruyendo la lista..."<<endl;
	while(!this->estaVacia()){
		this->remover(0);
	}
}

bool listaEnteros::estaVacia(){
	cout << "Comprobando si la lista esta vacia..."<<endl;
	return this->cuenta == 0;
}

int listaEnteros::tamanio(){
	return this->cuenta;
}


nodoLista* listaEnteros::obtenerNodo(int indice){
	cout << "Obtener nodo en el indice "<<indice<<"..."<<endl;
	if(indice < 0 || indice >= this->cuenta){
		throw "Fuera de rango...";
	}
nodoLista* actual = this->cabeza;
	for(int i=0; i<indice; i++){
		actual = actual->siguiente;
	}
	return actual;
}

void listaEnteros::insertar(int indice, int item){
	cout << "Insertando un nodo en el indice "<<indice<<"..."<<endl;
	if(indice < 0 || indice > this->cuenta){
		throw "indice fuera de rango...";
	}
	// Obtener puntero al nuevo nodo
	nodoLista *nuevoNodo = new nodoLista(item);
	
	// Si fuera el primer elemento de la lista
	if(indice == 0){
		nuevoNodo->siguiente = this->cabeza;
		this->cabeza = nuevoNodo;
	} else {
		nodoLista *previo = obtenerNodo(indice-1);
		nuevoNodo->siguiente = nuevoNodo;
		previo->siguiente = nuevoNodo;
	}
	this->cuenta++;
}

void listaEnteros::adjuntar(int item){        // Insertar un elemento al final de la lista
	this->insertar(this->cuenta, item);
}

int listaEnteros::obtener(int indice){        // Obtener un valor a partir del indice
	cout << "Recuperando elemento del indice..."<<indice<<endl;
	return this->obtenerNodo(indice)->item;
}

bool listaEnteros::contiene(int item){
	cout << "Verificando si la lista contien "<<item<<"..."<<endl;
	for(nodoLista *actual = this->cabeza; actual != 0; actual = actual->siguiente){
		if(actual->item = item){
			return true; 
		}
	}
	return false;
}

int listaEnteros::remover(int indice){
	if(indice < 0 || indice >= this->cuenta){
		throw "Indice fuera de rango";
	}
	cout << "Removiendo el eemento del indice "<<indice<<"..."<<endl;
	nodoLista *nodoAeliminar = obtenerNodo(indice-1);
	int valor = nodoAeliminar->item;
	if(indice = 0){
		this->cabeza=nodoAeliminar->siguiente;
	} else {
		nodoLista *previo = obtenerNodo(indice-1);
		previo->siguiente = nodoAeliminar->siguiente;
	}
	delete nodoAeliminar;
	this->cuenta--;
	return valor;
}

string listaEnteros::comoCadena(){
	ostringstream s;
	s << "{";
	for(nodoLista *actual = this->cabeza; actual != 0; actual->siguiente){
		s << actual->item;
		if(actual->siguiente != 0){
			s << ", ";
		}
	}
	s << "]";
	return s.str();
}

#endif










































