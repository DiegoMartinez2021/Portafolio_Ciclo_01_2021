#include "lista.h"
#include <iostream>
using namespace std;

int main(){
	listaEnteros lint1(10);
	
	lint1.adjuntar(12);
	lint1.adjuntar(7);
	lint1.adjuntar(19);
	lint1.printList();
	
	lint1.adjuntar(30);
	lint1.printList();
	
	lint1.insertar(1,41);
	lint1.printList();
	
	lint1.remover(2);
	lint1.printList();
	return 0;
}

