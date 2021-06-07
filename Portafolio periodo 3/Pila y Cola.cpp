#include <iostream>
#include "Pila.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main(){
	Pila<int> s;
	s.push(10);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(11);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(12);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(13);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(14);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(15);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(16);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(17);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(18);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(19);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	s.push(20);
	cout << "La pila es: " << s.pilaComoCadena() << endl;
	cout << "Parte superior: " << s.push() <<endl;
}























































