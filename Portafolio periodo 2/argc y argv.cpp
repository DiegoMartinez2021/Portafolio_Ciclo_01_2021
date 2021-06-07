#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char** argv){
	
	cout << "Tengo "<<argc<<" argumentos"<<endl;
	for(int i= 0; i<argc; i++){
		cout << argv[i] << endl;
	}
	
	return 0;
}
