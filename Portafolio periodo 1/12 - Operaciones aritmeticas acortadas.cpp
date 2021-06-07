//Operaciones aritmeticas acortadas
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	int x,y;
	
	cout << "Ingrese un numero aqui: "; cin >> x;
	cout << "Ingrese un otro aqui: "; cin >> y;
	
	x += y; //es lo mismo que x = x + y
	cout << x << endl;	
	
	x -= y; //es lo mismo que x = x - y
	cout << x << endl;
	
	x *= y; //es lo mismo que x = x * y
	cout << x << endl;
	
	x /= y; //es lo mismo que x = x / y
	cout << x << endl;			
	
	x %= y; //es lo mismo que x = x % y
	cout << x << endl;	
	
	getch();
	return 0;
}

