#include <iostream>
#include <array>
using namespace std;

int main(int argc, char *argv[]){
	array<int, 3> a={2, 4, 6};
	
	cout << "\nCaracteristicas: "<<endl<<endl;
	cout << "Primer elemento: " << a.front() << endl;
	cout << "Ultimo elemento: " << a.back() << endl;
	cout << "Tamanio del array: " << a.size() << endl;
	
	cout << "\nElementos del array: "<<endl;
	cout << "| " << a[0] << " | " << a[1] << " | " << a[2] << " | " << endl;
	return 0;
}
