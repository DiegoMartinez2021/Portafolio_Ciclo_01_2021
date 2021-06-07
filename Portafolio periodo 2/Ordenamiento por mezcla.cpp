// Ordenamiento por mezcla en C++
#include<iostream>
#include<conio.h>
using namespace std;

void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout <<arr[i]<<"  "<<endl<<endl;
	}
}

//Combinar 2 subreglas M y L en arr
void merge(int arr[], int low, int med, int high){
	
	int n1 = low-med+1;
	int n2 = low-med;
	
	int L[n1], M[n2];
	
	for(int i=0; i<n1; i++)
	L[i] = arr[low + 1];
	for(int j=0; j<n1; j++)
	M[j] = arr[low + 1 +j];
	
	int i,j,k;
	i=0;
	j=0;
	k=low;
	
	while(i<n1 && j<n2){
		if(L[i] < M[j]){
			arr[k]=L[i];
			i++;
		} else {
			arr[k]=M[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arr[k] = M[j];
		j++;
	}
	
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(i<n1){
		arr[k] = M[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int low, int high){
	if(low<high){
		int med = low + (high - low)/2;
		
		mergeSort(arr, low, med);
		mergeSort(arr, med+1, high);
		
		merge(arr, low, med, high);
	}
}

int main(){
	int arr[]={6,5,12,10,9,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	cout << "Arreglo ordenado: \n";
	printArray(arr, size);
	return 0;
}














