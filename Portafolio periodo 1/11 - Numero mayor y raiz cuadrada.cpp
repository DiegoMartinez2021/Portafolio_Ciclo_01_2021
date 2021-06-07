//Identificar el numero mayor de una serie de numeros
/*
	Este es el mismo metodo de la clase pero le cambie 
	unas cuantas cosas para practicar un poco por mi cuenta
*/

#include<iostream>
#include<math.h>
#include<conio.h>


using namespace std;

int main(){
cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	int num1[500], n, max = 0;
	
	cout << "Digite el numero de elementos: "; cin >> n;
	
	for(int i=0; i<n; i++){
		cout << i+1 << ". Ingrese el valor de los elementos: "; cin >> num1[i];
		
		if(num1[i] > max){
		max = num1[i];
		} 
	}
	cout << "\nEl valor maximo de este arreglo es: " << max;
	
	int raiz = sqrt(max);
	
	cout << "\nLa raiz cuadrada del valor es de: " << raiz; 
	
	getch();
	return 0;
}





















