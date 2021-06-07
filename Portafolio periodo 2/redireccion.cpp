#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	cout << "Escriba su nombre: "; 
	getline(cin,name);
	cout << "Hola "<<name<<endl;
	return 0;
}

