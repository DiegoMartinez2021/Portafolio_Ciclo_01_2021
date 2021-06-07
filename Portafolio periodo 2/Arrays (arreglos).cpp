#include<iostream>
#include<conio.h>
using namespace std;
	
	void printArray(int numeros[]){
		for(int i=0; i<5; i++){
			cout << "Numeros["<<i<<"] :"<<endl;
			cout << numeros[i]<<" "<<endl;
		}
	}
	
	
	int main(){
		
		int numeros[5]= {19, 10, 8, 17, 9};
		
		printArray(numeros);
		//Cambiando el valor en la pocision 3 
		numeros[3]=35;
		
		printArray(numeros);
		
		cout << "Ingrese el valor de numeros[4]: "; cin >> numeros[4];
		
		printArray(numeros);
		
		/*cout << endl;
		for(n : numeros){
			cout << n << " " << endl;*/
			getch();
		}	
	
	


