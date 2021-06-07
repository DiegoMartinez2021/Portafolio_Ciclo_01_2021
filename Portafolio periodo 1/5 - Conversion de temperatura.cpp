//Uso del modulo convertor de temperatura
#include "5 - Convertor de temperatura.h"
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	char continuar;
	
	do{
		int tipo = readUserSelec();
		double temp = leerTemp();
		convertTemp(tipo, temp);
		
		cout << "\nDesea convertir otra temperatura? (y/n): ";
		while(!(cin >> continuar)){
			cout << "Seleccione 'y' para continuar o 'n' para terminar: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}while(continuar == 'y');
	
	getch();
	return 0;
}

