#include<iostream>
using namespace std;

unsigned long long int factorial(int n){
	
	if(n<0){
		return(-1);
	}
	if(n==0){
		return(1);
	}
	else{
		cout << "n = "<<n<<endl;
		return(n*factorial(n-1));
	}
}

int main(){
	int value;
	cout << "Encuentre el facorial de un numero: "; cin >> value;
	cout << "El factorial del numero ingresado es: "<<factorial(value)<<endl;
	return 0;
}
