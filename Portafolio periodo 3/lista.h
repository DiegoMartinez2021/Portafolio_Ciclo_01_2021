#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class listaEnteros{
	private:
		int cuenta;
		int capacidad;
		int *items;
		int agrandar();
	public:
		listaEnteros(int capacidad);
		listaEnteros();
		~listaEnteros();
		listaEnteros(const listaEnteros &otraLista);
		bool estaVacia();
		int tamanio();
		void insertar(int indice, int item);
		void adjuntar(int item);
		int obtener(int indice);
		bool contiene(int item);
		int remover(int indice);
		void printList();
};

listaEnteros::listaEnteros(int capacidad){
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new int[capacidad];
}

listaEnteros::~listaEnteros(){
	delete[] items;
}

bool listaEnteros::estaVacia(){
	return this->cuenta == 0;
}

int listaEnteros::tamanio(){
	return this->cuenta;
}

int listaEnteros::obtener(int indice){
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	return this->items[indice];
}

void listaEnteros::insertar(int indice, int item){
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	if(this->cuenta >= this->capacidad) this->agrandar();
	
	for(int i = cuenta-1; i>=indice; i--){
		this->items[i+1] = this->items[i];
	}
	this->items[indice] = item;
	this->cuenta++;
}

int listaEnteros::agrandar(){
	int *temp = this->items;
	this->capacidad *= 2;
	this->items = new int[capacidad];
	for(int i=0; i<this->cuenta; i++){
		this->items[i] = temp[i];
	} 
	delete[] temp;
}

void listaEnteros::adjuntar(int item){
	this->insertar(this->cuenta, item);
}

bool listaEnteros::contiene(int item){
	for(int i=0; i<this->cuenta; i++){
		if(this->items[i] == item) return true;
	}
	return false;
}

int listaEnteros::remover(int indice){
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	if(indice<0 || indice>=this->cuenta) throw "Indice fuera de rango";
	
	int valor = this->items[indice];
	for(int i=indice; i<this->cuenta; i++){
		this->items[i] = this->items[i+1];
	}
	this->cuenta--;
	return valor;
}

void listaEnteros::printList(){
	std::cout << "| ";	
	for(int i=0; i<this->cuenta; i++){
		std::cout << this->obtener(i) << " |";
	}
	std::cout << std::endl;
}
#endif






























