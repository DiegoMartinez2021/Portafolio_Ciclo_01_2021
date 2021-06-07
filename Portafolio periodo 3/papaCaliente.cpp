#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "cola.h"

using namespace std;

int numRand(int max);
void papaHot(const vector<string> &listaNombres);

int main(){
	vector<string> players = {"1. Erik","2. Erik","3. Erik","4. Erik","5. Erik","6. Erik","7. Erik","8. Erik","9. Erik","10. Erik",
							  "11. Erik","12. Erik","13. Erik","14. Erik","15. Erik","16. Erik","17. Erik","18. Erik","19. Erik","20. Erik",};         
	papaHot(players);
	return 0;						  					  
}

int numRand(int max){
	static bool semillaCreada = false;
	if(!semillaCreada){
		srand(time(0));
		semillaCreada = true;
	}
	return rand() % max;
}

void papHot(const vector<string> &listaNombres){
	int cantidadJugadores = listaNombres.size();
	Cola<string> simulacion;
	for(int i=0; i<cantidadJugadores; i++){
		simulacion.enqueue(listaNombres[i]);
	}
	
	for(int i=cantidadJugadores; i>1; i--){
		cout << "Quien tiene la papa caliente? "<<endl;
		for(int pases=numRand(2*cantidadJugadores); pases>0; pases--){
			string jugador = simulacion.dequeue();
			cout << Jugador << endl;
			simulacion.dequeue(jugador);
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		string funado = simulacion.dequeue();
		cout << funado << endl;
		cout << "Alto!!! " << funado << " sale del juego..." << endl<<endl;
	}
	string ganador = simulacion.dequeue();
	cout << ganador << " gano el juego!!!"<<endl;
}




















