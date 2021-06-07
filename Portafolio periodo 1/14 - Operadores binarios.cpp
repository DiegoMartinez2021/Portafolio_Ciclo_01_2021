//numeros binarios 
#include<iostream>
#include<bitset>
#include<conio.h>
using namespace std;

int main(){
cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;

	int x=5, y=7, z;
	
	cout << "\tDecimal" << " : Binario"<<endl;
	cout << "\tx: " << x <<" = " << bitset<8>(x) << endl;
	cout << "\ty: " << y <<" = " << bitset<8>(y) << endl << endl;
	
	z = x & y;
	cout << "x & y: "<< z << "  =  " << bitset<8>(z) << endl;
	
	z = x | y;
	cout << "x | y: "<< z << "  =  " << bitset<8>(z) << endl;
	
	z = x ^ y;
	cout << "x ^ y: "<< z << "  =  " << bitset<8>(z) << endl;
	
	z = x << y;
	cout << "x << y: "<< z << " = " << bitset<8>(z) << endl;
	
	z = x >> y;
	cout << "x >> y: "<< z << " = " << bitset<8>(z) << endl;				

	getch();
	return 0;
}
