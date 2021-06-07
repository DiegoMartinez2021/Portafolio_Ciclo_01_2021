//Calculo de valor absoluto de un dato
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int abs(int var){
	var = -var;
	return var;
}
double abs(double var){
	var = -var;
	return var;
}

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	int num1 = -345;
	double num2 = -23456.67;
	
	cout << "El valor absoluto de "<<num1<<" es el siguiente: "<<abs(num1)<<endl;
	cout << "El valor absoluto de "<<num2<<" es el siguiente: "<<abs(num2)<<endl;
	
	getch();
	return 0;
}
