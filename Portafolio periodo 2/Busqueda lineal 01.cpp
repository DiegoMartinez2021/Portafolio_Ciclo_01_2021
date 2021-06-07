#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

const int ELEMENT = 5;

int main(){
	
	array<int,5> arr = {23, 45, 67, 84, 13};
	
	cout << "Elemento" << setw(13) << "valor" << endl;
	
	for(size_t i = 0; i< arr.size(); i++){
		cout << setw(8) << i << setw(13) << arr[i] << endl; 
	} 
	return 0;
}


























