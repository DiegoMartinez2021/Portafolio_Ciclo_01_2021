#include<iostream>
#include<array>
#include<string>
#include<conio.h>
using namespace std;

int main(){
	
	array<string, 5> nombres = {"Oscar", "Krista", "Tony", "Nils", "Briam"};
	
	array<string, 3> nombres2 = {"Celeste, Javier, Jairo"};
	
	//imprimir los nombres
	
	int tamanio = sizeof(nombres)/sizeof(nombres[0]);
	int tamanio2 = nombres2.size();
	
	for(int i=0; i<tamanio; i++){
		cout << nombres[i] << endl;
	}
	for(int i=0; i<tamanio2; i++){
		cout << nombres2[i] << endl;
	}
	
	
	return 0;
}
