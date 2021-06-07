#include<iostream>
#include<array>
using namespace std;

int main(){
	
	array<int,7> numeros = {1,2,3,4,5,6,7};
	int inferior = 0;
	int superior = (int)numeros.size() -1;
	int medio;
	int valorBuscado = 3;
	int index = -1;
	while(inferior <= superior){
		//cout << "inf "<< inferior << "sup "<< superior << "indx " << index "med "<< medio << "value "<<numeros[medio] << endl;
		
		medio = inferior + (superior - inferior) / 2;
		if(valorBuscado == numeros[medio]){
			index = medio;
			break;
		}
		else if(valorBuscado > numeros[medio]){
			superior = medio + 1;
		}
		else if(valorBuscado < numeros[medio]){
			superior = medio - 1;
		}
		else{
			cout << "Error";
		}
	}
	
	cout << "Indice del valor "<< valorBuscado << " : "<< index << endl;
	
	return 0;
}
