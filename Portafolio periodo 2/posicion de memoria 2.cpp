// Posicion en la memoria
#include<iostream>
using namespace std;

int main(){

	int paul = 21;
	int* melisa = &paul;
	int dave = *melisa;
	int *tom = &dave;
	int **ramon = &tom;
	
	cout <<"paul: "<< paul << endl;
	cout <<"&paul: "<< &paul << endl;
	cout <<"melisa: "<< melisa << endl;
	cout <<"&melisa: "<< &melisa << endl;
	cout <<"dave: "<< dave << endl;
	cout <<"&dave: "<< &dave << endl;
	cout <<"ramon: "<< ramon << endl;
	cout <<"*ramon: "<< *ramon << endl;
	cout <<"**ramon: "<< **ramon << endl;
	
	cout << "_______________________________"<<endl;
	return 0;
}















