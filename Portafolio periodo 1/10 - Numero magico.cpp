//Juego del numero mágico
#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	int num1, numRand, num2;
	

	cout << "Adivina el numero: "; cin >> num1;
	
	srand(time(0));
	numRand = rand()%100+1;
	
	if(num1 == numRand){
		cout << "Correcto!! Como lo supiste!?"<<endl;
	}
	else if(num1 > numRand){
		cout << "El numero es menor que: "<<num1<<endl;
	}
	else if(num1 < numRand){
		cout << "El numero es mayor que: "<<num1<<endl;
	}
	
	cout << "\n\nQuieres saber cual es el numero? 1. Si   2. No: "; cin >> num2;
	
	if(num2 == 1){
		cout << "El numero magico es: "<<numRand<<endl;
	}
	else if(num2 == 2){
		cout << "Bueno, nos vemos!";
	}
		
	getch();		
	return 0;
}
