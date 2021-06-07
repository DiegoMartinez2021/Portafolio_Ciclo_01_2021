//Identificacion de los numeros perfectos entre 1 y 1000
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int perfect(int);
void printPerfect(int);

int main(){
	int s;
	
	cout << "Identificacion de numeros perfectos entre 1 y 1000";
	cout << "Autor: Diego Fernando Martinez Garcia - Carnet: MG101120."<<endl<<endl;
	
	for(int numCount=1; 1000>=numCount; numCount++){
		s = perfect(numCount);
		if(1 == s) printPerfect(numCount);
	}
	cout << "\n\n";
	return 0;
}

int perfect(int n){

	int suma = 0, numFact;	
	
	for(int numDiv=1; numDiv<n; numDiv++){
		if(n%numDiv == 0){
			numFact = numDiv;
			suma += numFact;
		}
	}
	if(suma == n) return 1;
	else return 0;
}

void printPerfect(int m){

	cout << "\n\n" << m << " Es igual a la suma de: ";	
	
	for(int numDiv = 1; numDiv<m; numDiv++){
		if(m%numDiv == 0) cout << numDiv << "   ";
	}
	
	getch();
	return ;
}













