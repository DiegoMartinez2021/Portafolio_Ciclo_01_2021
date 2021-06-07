#include <iostream>
#include <string>
#include "Pila.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool estanLlavesBalanceadas(string expresion){
	Pila<char> unaPila;
	for(size_t i=0; i < expresion.length(); i++){
		char caracter = expresion[i];
		cout << caracter << endl; // esto se puede borrar despues
		if(caracter == '{'){
			unaPila.push(caracter);
			cout << unaPila.pilaComoCadena() << endl;
		} else if(caracter == '}') {
			if(unaPila.estaVacia()) return false;
			unaPila.pop();
			cout << unaPila.pilaComoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main(){
	string cadena;
	cout << "\nIngrese una expresion: "; cin >> cadena;
	if(estanLlavesBalanceadas(cadena)){
		cout << "Las llaves estan balanceadas."<<endl;
	} else {
		cout << "Las llaves no estan balanceadas."<<endl;
	}
	return 0;
}

















