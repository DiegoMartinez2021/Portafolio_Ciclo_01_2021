#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	
	for(int i=0; i<size; i++){
		cout << " | " << arr[i];
	}
	cout << " | \n";
}

void ordenBurbu(int arr[], int size){
	for(int paso=0; paso<size; paso++){
		for(int i=0; i<size-paso-1; i++){
			if(arr[i] > arr[i+1]){
				int aux = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = aux;
			}
		}
	}
}

int main(){
	
	int data[] = {-2,45,0,11,-9,7,3,86};
	int size = sizeof(data)/sizeof(data[0]);
	cout << "Arreglo inicial: \n";
	printArray(data, size);
	ordenBurbu(data, size);
	cout << "Arreglo ordenado de forma ascendente: \n";
	printArray(data, size);
	return 0;
}
