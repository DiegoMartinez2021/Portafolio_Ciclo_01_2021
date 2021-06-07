//Condicional 2
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num1;
	string num2;
	cout << "Ingrese una nota: "; cin >> num1;
	
	num2 = (num1 < 6) ? "reprobo" : ((num1 >= 6) ? "aprobo":"reprobo");
	
	cout << "Su nota es de " << num1 << ", usted " << num2;
	
	num2 = (num1 == 0) ? "0 en el examen " : ((num1 >= 6) ? "aprobo":"reprobo");
	
	getch();
	return 0;
}

