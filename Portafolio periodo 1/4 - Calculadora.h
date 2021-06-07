//Autor: Diego Fernando Martinez Garcia - Carnet: MG101120
//Calculadora por medio de funcionesw
#ifndef CALCULADORA_CALCULADORA_H 
#define CALCULADORA_CALCULADORA_H

#include<iostream>
#include<math.h>

using namespace std;

const double pi = 3.141695653589793238;

double sumar(double x, double y){
	return x + y;
}

double restar(double x, double y){
	return x - y;
}

double multiplicar(double x, double y){
	return x * y;
}

double dividir(double x, double y){
	return x / y;
}


double soliciNum(string queNum){
		double numero;
		cout << queNum << ": ";
		while(!(cin >> numero)){
			cin.clear();
			cin.ignore(1000, '\n');
		}
		return numero;
}

char soliciOperador(){
	char operador;
	cout << "Seleccione la opracion ( + | - | * | / ) :  ";
	while(!(cin>>operador)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Operador no valido, intente con otro.";
	}
	return operador;
}

void calcu(){
	
	double num1, num2, total;
	char operador; 


	cout << "Calculadora para operaciones con dos numeros."<<endl;
	cout << "Porfavor ingresa dos numeros:"<<endl<<endl;
	
	num1 = soliciNum("Primer numero");
	num2 = soliciNum("Segundo numero");
	operador = soliciOperador();
	
	switch(operador){
		case '+':
			total = sumar(num1, num2);
			break;
			
		case '-':
			total = restar(num1, num2);
			break;
			
		case '*':
			total = multiplicar(num1, num2);
			break;
			
		case '/':
			total = dividir(num1, num2);
			break;
			
		default:
			cout << "Operador no soportado.";
			total = -1.0;
			break;									
	}
	cout << "El resultado total es: " << total;
}

double valorPi(){
	return pi;
}
#endif




















