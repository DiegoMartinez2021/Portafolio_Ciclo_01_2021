#include<iostream>
#include<iomanip>
using namespace std;

float prom(const float arr[], const int n){
	float suma = 0.0;
	for(int i=0; i<n; i++){
		suma += arr[i];
	}
	return suma/n;
}


int main(int argc, const char * argv[]){
	using namespace std;
	
	//promedio de 5 numeros
	const int N = 5;
	float numeros[N];
	
	for(int i=0; i<N; i++){
		cout << "Numero "<<i+1<<" : "; cin >> numeros[i];
	}
	
	cout << "El prmedio es " << fixed << setprecision(1);
	cout << prom(numeros, N)<<endl;
	
	return 0;
}



























