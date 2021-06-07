#include<iostream>
#include<iomanip>
using namespace std

int main(int argc, const char * argv[]){
	
	int numeros[10];
	
	for(int i=0; i<10; i++){
		numeros[i] = 10 * (i+1);
	}
	
	cout << "Indice\tValor\n-----\t-----\n";
	
	for(int i=0; i<10; i++){
		cout << setw(6) << i << "\t" << setw(5) << numeros[i] << endl;
	}
	
	
	
	return 0;
}
