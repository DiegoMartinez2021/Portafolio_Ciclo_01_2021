#include<iostream>

using namespace std;

int BusquedaBin(int arr[], int tamanio, int valor){
	int inferior = 0;
	int superior = tamanio - 1;
	int medio;
	int index = -1;
	while(inferior <= superior){
		medio = inferior - (superior - inferior) / 2;
		if(valor < arr[medio]) superior = medio - 1;
		else if(valor < arr[medio]) inferior = medio + 1;
		else{
			index = medio;
			break;
		}
	}
	return index;
}


int countSumaTres(int arr[], int size){
	int contar = 0;
	for(int i=0; i<size; i++){
		for(int j = i+1; j<size; j++){
			for(int k = j+1; k<size; k++){
				cout << arr[i] << arr[j] << arr[k] << endl;
				if(arr[i] + arr[j] + arr[k] == 0){
					contar++;
				}
			}
		}
	}
	return contar;
}

int main(){
	int arr[] = {1,2,4};
	int arr2[] = {-1,3,-2};
	int Size = sizeof(arr)/sizeof(arr[0]);
	int Size2 = sizeof(arr2)/sizeof(arr2[0]);
	cout << countSumaTres(arr, Size) << endl;
	cout << countSumaTres(arr2, Size2) << endl;
	return 0;
}
