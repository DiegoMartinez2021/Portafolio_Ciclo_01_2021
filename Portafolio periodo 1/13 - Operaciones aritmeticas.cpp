//calculo de opraciones aritmeticas
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	int x,y;
	
		cout << "***Calula las siguientes opraciones aritmeticas***"<<endl;
		
		cout << "\nIngrese un numero aqui: ";      cin >> x;
		cout << "Ingrese el otro numero aqui: "; cin >> y;
		
		cout << "\nEl resultado de la suma es: "              << x+y << endl;
		cout << "El resultado de la resta es: "               << x-y << endl;
		cout << "El resultado de la multiplicacion es: "      << x*y << endl;
		cout << "El resultado de la divicion es: "            << x/y << endl;
		cout << "El resultado del residuo de la divicion es: "<< x%y << endl;
		
		x++;
		y++;
		cout << "el incremento en uno es: X = "<< x << "  " << "Y = " << y<<endl;
		
		x--;
		y--;
		cout << "el decremento en uno es: X = "<< x << "  " << "Y = " << y<<endl;
		
	getch();
	return 0;
}
