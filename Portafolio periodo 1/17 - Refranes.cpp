//Refranes
#include<iostream>	
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	int numPlay;
	
	cout << "Digite un numero del 1 al 3: "; cin >> numPlay;
	
	switch(numPlay){
		case 1: 
			cout << "\nOjos que no ven, corazon que no siente."; 
		break;
		
		case 2: 
			cout << "\nEl que entre la miel anda, algo se le pega."; 
		break;
		
		case 3: 
			cout << "\nSi con lobos andas, a aullar aprendes."; 
		break;
		default: cout << "\nDebes ingresar un numero del 1 al 3";
	}
	getch();
	return 0;
}
