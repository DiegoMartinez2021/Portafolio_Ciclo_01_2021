#include<iostream>
#include<array>
#include<conio.h>
using namespace std;

int main(){
	
	string names[5] = {"Krista", "Oscar", "Leo", "Nils", "El Brallam"};
	
	array<string,5> names2 = {"Gabriel", "Victor", "Erick", "Celeste", "Javier"};
	
	//Imprimir los nombres en pantalla
	
	int tamanio = sizeof(names) / sizeof(names[1]);
	int tamanio2 = names2.size();
	
	for(int i=0; i<tamanio; i++){
		cout << "nombres["<< i <<"] : " << names[i] << endl;
	}
	cout << "\n\n";
	
	for(int i=0; i<tamanio; i++){
		cout << "nombres 2["<< i <<"] : " << names2[i] << endl;
	}
	
	return 0;
}
