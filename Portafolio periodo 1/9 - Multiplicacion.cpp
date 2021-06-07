//Multiplicacion
#include<iostream>
#include<conio.h>
using namespace std;

void multiplicacion(int num1, int rango){
	for(int i=1; i<=rango; i++){
		cout << num1 << " * " << i << " = " << num1 * i<<endl;
	}
}
void multiplicacion(int num1){
	for(int i=1; i<=10; i++){
		cout << num1 << " * " << i << " = " << num1 * i<<endl;
	}
}
int main(){
	
	int num1, rango;
	char opt = 'n';
	
	cout << "Ingrese un numero positivo: "; cin >> num1;
	cout << "Desea agregar un rango? (y/n): "; cin >> opt;
	
	if(opt == 'y'){
		cout << "Ingrese un rango para sus tablas: "; cin >> rango;
		multiplicacion(num1,rango);
	}
	else{
		multiplicacion(num1);
	}
	
	getch();
	return 0;
}
