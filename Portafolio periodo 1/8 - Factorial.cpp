//Calculo de factorial
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	int num1=1, fact=1;
	
	while(num1 <= 6){
		fact *= num1;
		num1++;
	}
	cout << "El factorial es: "<<fact;
	
	getch();
	return 0;
}
