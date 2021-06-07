#include<iostream>
using namespace std;

void printArray(int arr[][3][2], int filas, int col, int depth){
	for(int i = 0; i<filas; i++){
		for(int j = 0; j<col; j++){
			for(int k = 0; k<depth; k++){
				cout << "arr["<<i<<"]["<<j<<"]["<<k<<"] = "<<arr[i][j][k]<<endl;
			}
		}
	}
}

int main(){
	
	int tresArr1[2][3][2] = {
							{
								{1, 2},
								{3, 4},
								{5, 6}						
							},		
							{
								{7, 8},
								{9, 10},
								{11, 12}						
							}	
						};
	
	
	int tresArr2[2][3][2] = {{{1,2},{3,4},{5,6}}, {{7,8},{9,10},{11,12}}};
	int tresArr3[2][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	
	cout << "Los valores del arreglo 01 son: "<<endl;
	printArray(tresArr1, 2, 3, 2);
	
	cout << "Los valores del arreglo 02 son: "<<endl;
	printArray(tresArr2, 2, 3, 2);
	
	cout << "Los valores del arreglo 03 son: "<<endl;
	printArray(tresArr3, 2, 3, 2);
	
	
	return 0;	
}











