#include <iostream>
#include <queue>
using namespace std;

int main(){
	
	bool continuar = true;
	queue <double> myqueue;
	double valor;
	reset:
	cout << "Escribe una serie de valores para colocar en el stack: "<<endl;
	
	myqueue.push(12);
	myqueue.push(13);
	myqueue.push(14);
	myqueue.push(15);
	myqueue.push(16);
	myqueue.push(17);
	myqueue.push(18);
	myqueue.push(19);
	myqueue.push(11);
	myqueue.push(10);
	
	cout << "Tamanio de la pila: " << myqueue.size() << endl;
	
	
	while(!myqueue.empty()){
		cout << myqueue.front() << endl;
		myqueue.pop();
	}
	
	
}
