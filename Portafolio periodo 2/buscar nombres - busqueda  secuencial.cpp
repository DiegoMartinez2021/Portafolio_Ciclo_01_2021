#include<iostream>
#include<array>
#include<string>
#include<conio.h>
using namespace std;

bool seqSearch(array<string, 5>nombres, string valBuscado){
	
	bool found = false;
	for(int i=0; i<nombres.size(); i++){
		if(valBuscado == nombres[i]){
			found = true;
			break;
		}
	}
	return found;
}

int main(){
	
	array<string, 5> nombres = {"Oscar", "Krista", "Tony", "Nils", "Briam"};
	array<string, 3> valtofind = {"Celeste, Javier, Jairo"};
	
	for(int i; i<valtofind.size(); i++){
		if(seqSearch(nombres, valtofind[i])){
			cout << valtofind[i] << "esta en el arreglo"<<endl;
		}else{
			cout << valtofind[i] << "no esta en el arreglo"<<endl;
		}
	}
	return 0;
}
