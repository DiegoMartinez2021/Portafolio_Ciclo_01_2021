// Posicion en la memoria
#include<iostream>
using namespace std;

	int paul = 25, nina = 90, carlo = 22;
	int* melisa = &paul;
	int tom = paul;
	int* dave = melisa;
	

void print(){
	
	cout <<"paul: "<< paul << endl;
	cout <<"&paul: "<< &paul << endl;
	//cout << "&nina = "<<&nina<<endl;
	//cout << "&carlo = "<<&carlo<<endl;
	cout <<"melisa: "<< melisa << endl;
	cout <<"&melisa: "<< &melisa << endl;
	//cout <<"*melisa: "<< &melisa << endl;
	//cout <<"&tom: "<< &tom << endl;
	//cout <<"tom: "<< tom << endl;
	cout <<"dave: "<< dave << endl;
	cout <<"&dave: "<< &dave << endl;
	cout <<"*dave: "<< *dave << endl;
	
	cout << "_______________________________"<<endl;
}

int main(){
	
	print();
	*melisa = 30;	
	print();
	
	return 0;
}














