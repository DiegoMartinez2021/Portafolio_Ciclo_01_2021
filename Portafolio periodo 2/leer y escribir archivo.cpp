#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;

void writeFile(string file, int lines){
	
	ofstream myFile(file);
	string texto;
	if(myFile.is_open()){
		cout << "Ingrese el contenido del documento: \n";
		for(int i=0; i<lines; i++){
			getline(cin, texto);
			myFile << texto << endl;
		}
		myFile.close();
	}
	else cout << "No se pudo abrir el archivo.";
}

void readFile(string file){
		
	ofstream myFile(file);
	string line;
	if(myFile.is_open()){
		while(getline(myFile,line)){
			cout << line << "\n";
		}
		myFile.close();
	}
	else cout << "No se pudo abrir el archivo.";
}

int main(int argc, const char * argv[]){
	int lines = 5;
	string nameFile = "documento.txt";
	writeFile(nameFile, lines);
	readFile(nameFile);
	getch();
	return 0;
}


















