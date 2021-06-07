//Torre de hamoi
#include<iostream>
using namespace std;

void resolver(int count, char origen, char destino, char free){
	if(count == 1){
		cout << "\nMoviendo el disco superior entre "<<origen<<" hasta " << destino;
		
	} else {
		resolver(count -1, origen, free, destino);
		resolver(1, origen, destino, free);
		resolver(count -1, free, destino, origen);
	}
}

int main(){
	int valor;
	char resp;
replay:	
	cout << "Ingrese el numero de discos: "; cin >> valor;
	resolver(valor, 'A', 'C', 'B');
	
	cout << "\n\nReiniciar la partida (y/n): "; cin >> resp;
	if(resp == 'y'){
	system("CLS");
	goto replay;
	}else if(resp == 'n') return 0;
	
	return 0;
}
