#include<iostream>
#include<iomanip>
using namespace std;

void printArray(int[][3], int, int);

int main(int argc, const char * argv[]){
	
	int array1[2][3] = {{1,2,3},{4,5,6}};
	int array2[2][3] = {{1,2,3},{4,5,6}};
	int array3[2][3] = {{1,2},{4}};
	
	cout << "Los valores del arreglo 1 son: "<<endl;
	printArray(array1, 2, 3);
	
	cout << "Los valores del arreglo 2 son: "<<endl;
	printArray(array2, 2, 3);
	
	cout << "Los valores del arreglo 3 son: "<<endl;
	printArray(array3, 2, 3);	

	
	return 0;
}

void printArray(int arr[][3], int filas, int columnas){
	using namespace std;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout << arr[i][j]<<"  ";
		}
		cout << endl;
	}
}
