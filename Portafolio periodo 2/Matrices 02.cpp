#include<iostream>
using namespace std;

int main(){
	
	int numeros[2][3];
	
	cout << "Ingrese seis numeros: "<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cin >> numeros[i][j];
		}
	}
	
	cout << "Los numeros ingresados son: "<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout << "Numeros ["<<i<<"]["<<j<<"] = "<<numeros[i][j]<<endl;
		}
	}						
	
	
	return 0;
}
