#include<iostream>
#include<array>
using namespace std;

int main(){
	
	array<int,5> numeros = {1, 4, 3, 7, 5};
	int valorBuscado = 4;
	int index = -1;
	
	for(int i=0; i<=numeros.size(); i++){
		if(numeros[i]==valorBuscado){
			index = i;
			break;
		}
	}
	
	cout << "Indice del valor: "<<valorBuscado<<" : "<<index<<endl;
	
	return 0;
}






