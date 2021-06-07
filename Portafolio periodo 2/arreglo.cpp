#include<iostream>
#include<array>
using namespace std;
const int SIZE = 10;

void printArray(array<int,SIZE> &arr, int num_elementos){
	for(int i=0; i<arr.size() && i<num_elementos.size(); i++){
		cout << arr[i] << endl;
	}
}
int main(){
	arrat<int,SIZE> &miArray;
	for(int i=0; i<SIZE; i++){
		cin >> miArray[i];
	}
	cout << "Cantidad de elementos: "<<miArray.size<<endl;
	cout << "Primeros 10 eementos: "<<endl;
	printArray(miArray,10);
	
	return 0;
}
