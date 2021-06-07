//Numeros random
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	int numRand, num2, num41;
	
	srand(time(0));
	string num1;
	numRand = rand()%3+1;
	
	cout << "\nInstrucciones: presiona 1 para Piedra, 2 para Papel y 3 Para tijeras: "; cin >> num2;
	
	switch(numRand){
		case 1:
			num1 = "Piedra";
		break;	

		case 2:
			num1 = "Papel";
		break;
		
		case 3:
			num1 = "Tijeras";
		break;				
		
	}
	
	cout << "El cpu a sacado: "<<num1<<endl;
	cout << "\nTu turno";
	
	if(num2 == numRand){
		cout << "\nEmpataron, sigue  intentando!";
	}
	else if((num2 == 1) && (numRand == 3)){
		cout << "\nFelicidades, ganaste!";
	}
	else if((num2 == 2) && (numRand == 1)){
		cout << "\nFelicidades, ganaste!";
	}	
	else if((num2 == 3) && (numRand == 2)){
		cout << "\nFelicidades, ganaste!";
	}	
	else cout << "\nPerdiste, pero seguro que ganas la siguiente!!!";
	
	getch();
	return 0;
}


