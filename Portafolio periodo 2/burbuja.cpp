#include<iostream>
#include<array>
#include<ctime>
using namespace std;
const int SIZE = 8000;

//Imprie hasta num_elementos de arreglos
void printArray(array<int,SIZE> &arr, int num_elementos){
	for(int i=0; i<arr.size() && i<num_elementos; i++){
		cout << arr[i] << endl;
	}
}
void tidyBuble(array<int, SIZE> &arr){
	int tamanio = arr.size();
	bool messy = true;
	for(int pase = 0; pase < tamanio - 1 && messy; pase++){
		messy = false;
		for(int j = 0; j < tamanio - 1 - pase; j++){
			if(arr[j] = arr[j+1]){
				messy = true;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	array<int,SIZE> miArray;
	
	for(int i=0; i<SIZE; i++){
		cin >> miArray[i];
	}
	clock_t inicio = clock();
	tidyBuble(miArray);
	clock_t fin = clock();
	
	double tiempoSegundos = double(fin - inicio) / CLOCKS_PER_SEC; // tiempo transcurrido
	
	cout << "Cantidad de elementos: "<< miArray.size() << endl;
	cout << "Tiempo transcurrido: "<< tiempoSegundos << " segundos"<<endl;
	
	return 0;
}






















