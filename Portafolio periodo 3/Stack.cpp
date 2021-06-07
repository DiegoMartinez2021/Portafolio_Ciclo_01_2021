// Stacks
#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	bool continuar = true;
	stack <double> mystack;
	double valor;
	reset:
	cout << "Escribe una serie de valores para colocar en el stack: "<<endl;
	
	mystack.push(12);
	mystack.push(13);
	mystack.push(14);
	mystack.push(15);
	mystack.push(16);
	mystack.push(17);
	mystack.push(18);
	mystack.push(19);
	mystack.push(11);
	mystack.push(10);
	
	cout << "Tamanio de la pila: " << mystack.size() << endl;
	
	
	while(!mystack.empty()){
		cout << mystack.top() << endl;
		mystack.pop();
	}
	
	
}
