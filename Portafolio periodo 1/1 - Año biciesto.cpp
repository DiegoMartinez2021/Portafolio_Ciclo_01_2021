//Calculo de año biciesto
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
	
	int num1;
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	cout << "Ingrese un anio porfavor: "; cin >> num1;
	
	if(num1 % 4 == 0){
		if(num1 % 100 == 0){
			if(num1 % 400 == 0)
				cout << num1 << " es un anio biciesto!";
			else 
				cout << num1 << " no es un anio biciesto.";
	}else{
		cout << num1 << " es un anio biciesto!";
	}
	}else{
		cout << num1 << " no es un anio biciesto.";
	}
	
	
	getch();
	return 0;
}
