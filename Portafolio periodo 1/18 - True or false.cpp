//Variables booleanas
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	int x=12, y=11;
	bool var1 = true, var2 = false;
	//0 = false (falso) y 1 = true (verdadero)
	
	if (x < y) {cout << " x < y\n";}
	if (x > y) {cout << " x > y\n";}
	if (x <= y) {cout << " x <= y\n";}
	if (x >= y) {cout << " x >= y\n";}
	if (x == y) {cout << " x == y\n";}
	if (x != y) {cout << " x != y\n";}
	
	if(var1 && var2) {cout << " var1 AND var2\n";}
	if(!(var1 && var2)) {cout << " NOT (var1 AND var2)\n";}
	if(var1 || var2) {cout << " var1 OR var2\n";}

	getch();
	return 0;
}
