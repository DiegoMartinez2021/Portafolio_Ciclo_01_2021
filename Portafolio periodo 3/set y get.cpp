#include<iostream>
using namespace std;

class automovil{
	public:
		automovil();
		void set_details();
		void set_numDoors(int doors);
		void get_details() const;
		void get_numDoors() const; 
	private:
		string fabricante;
		int numDoors;
		int numCilindros;
		int motorSize;	
};

automovil :: automovil(){
	numDoors = 0;
	numCilindros = 0;
	motorSize = 0;
}

void automovil :: set_details(){
	cout << "Igrese el nombre del fabricante: "; cin >> fabricante;
	cout << "Cuantas puertas? "; cin >> numDoors;
	cout << "Cuantos cilindros? "; cin >> numCilindros;
	cout << "Introduzca el tamanio del motor: "; cin >> motorSize;
	cout << "\n";
}

void automovil :: set_numDoors(int doors){
	this -> numDoors = doors;
}

void automovil :: get_details() const {
	cout << "Fabricante: " << fabricante << endl;
	cout << "Puertas: " << numDoors << endl;
	cout << "Cilindros: " << numCilindros << endl;
	cout << "Tamanio del motor: " << motorSize << endl;
	cout << "\n";
}

void automovil::get_numDoors() const{
	cout << "Puertas: " << numDoors << endl; 
}

int main(){
	automovil miCarro;
	miCarro.set_details();
	
	automovil DanielCarr;
	DanielCarr.set_details();
	
	automovil ManuelCarr;
	ManuelCarr.set_details();
	
	system("CLS");
	
	miCarro.get_details();
	DanielCarr.get_details();
	ManuelCarr.get_details(); 
	
	return 0;
}



















