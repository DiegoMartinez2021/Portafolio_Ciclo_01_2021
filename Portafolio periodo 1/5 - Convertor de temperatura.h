//Modulo de conversion de temperatura
#ifndef TEMPERATURA_TEMPERATURA_H
#define TEMPERATURA_TEMPERATURA_H

#include<iostream>

using namespace std;

int readUserSelec(){
	int seleccion;
	
	cout << "----Conversor de temperaturas----";
	cout << "1- De Celsius a Fahrenheit"<<endl;
	cout << "2- De Celsius a Kelvin"<<endl;
	cout << "3- De Fahrenheit a Celsius"<<endl;
	cout << "4- De Fahrenheit a Kelvin"<<endl;
	cout << "5- De Kelvin a Celsius"<<endl;
	cout << "6- De Kelvin a Fahrenheit"<<endl;
	cout << "Seleccione el tipo de conversion: ";
	
	while(!(cin>>seleccion) || seleccion < 1 || seleccion > 6){
		cout << "\nSolo estan permitidos numeros del 1 al 6";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return seleccion;
}

double leerTemp(){
	double temp;
	cout << "Ingrese el valor de la temperatura a convertir: ";
	while(!(cin >> temp)){
		cout << "Ingrese un valor de temperatura: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return temp;
}

double convertTemp(int tipo, double temp){
	double tempConverted;
	
	switch(tipo){
		case 1:
			tempConverted = 1.8 * temp + 32;
		cout << "La temperatura "<<temp<<"C equivale a "<<tempConverted<<"F"<<endl; break;
		case 2:
			tempConverted = temp + 273.15;
		cout << "La temperatura "<<temp<<"C equivale a "<<tempConverted<<"K"<<endl; break;
		case 3:
			tempConverted = (temp - 32)*1.8;
		cout << "La temperatura "<<temp<<"F equivale a "<<tempConverted<<"C"<<endl; break;
		case 4:
			tempConverted = (5/9)*(temp - 32) + 273.15;
		cout << "La temperatura "<<temp<<"F equivale a "<<tempConverted<<"K"<<endl; break;
		case 5:
			tempConverted = temp - 273.15;
		cout << "La temperatura "<<temp<<"K equivale a "<<tempConverted<<"C"<<endl; break;
		case 6:
			tempConverted = (1.8*(temp - 273.15))+32;
		cout << "La temperatura "<<temp<<"K equivale a "<<tempConverted<<"F"<<endl; break;	
		default: cout << "Opcion no valida"; break;							
	}
	return tempConverted;
}

#endif























