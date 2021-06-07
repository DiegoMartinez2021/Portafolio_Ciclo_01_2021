//Determinacion de un digito por caracter
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numA=0, numE=0, numI=0, numO=0, numU=0;
	char word[100];
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	cout << "Digite una palabra: "; gets(word);
	
	for(int i=0; i<30; i++){
		switch(word[i]){
			case 'a': numA++; break;
			case 'e': numE++; break;
			case 'i': numI++; break;
			case 'o': numO++; break;
			case 'u': numU++; break;
		}
	}
	cout << "Digito/s de la vocal a: "<<numA<<endl;
	cout << "Digito/s de la vocal e: "<<numE<<endl;
	cout << "Digito/s de la vocal i: "<<numI<<endl;
	cout << "Digito/s de la vocal o: "<<numO<<endl;
	cout << "Digito/s de la vocal u: "<<numU<<endl;
	
	getch();
	return 0;
}
