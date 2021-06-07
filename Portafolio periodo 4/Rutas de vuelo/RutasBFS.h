#ifndef RUTA_BFS_H
#define RUTA_BFS_H
#include <limits>
#include <list>
#include <iterator>
#include "Digrafo.h"
using namespace std;

class Buscar_Ruta_BFS {
	private:
		const int INFINITO = std::numeric_limits<int>::max();
		int vertices;
		bool *marcado;
		int *aristaHacia;
		int *distanciaHacia;
		void bfs(const Digrafo &G, int s);
	public:
		Buscar_Ruta_BFS(const Digrafo &G, int s);
		Buscar_Ruta_BFS(const Buscar_Ruta_BFS &otra);
		~Buscar_Ruta_BFS();
		bool existeCaminoHacia(int v);
		int getDistanciaHacia(int v);
		list<int> getRutaHacia(int v);
};

Buscar_Ruta_BFS::Buscar_Ruta_BFS(const Digrafo &G, int s){
	vertices = G.getVert();
	marcado = new bool[vertices];
	distanciaHacia = new int[vertices];
	aristaHacia = new int[vertices];
	for(int v = 0; v < vertices; v++){
		marcado[v] = false;
		distanciaHacia[v] = INFINITO;
	}
	bfs(G, s);
}

void Buscar_Ruta_BFS::bfs(const Digrafo &G, int s){
	list<int> num1;
	marcado[s] = true;
	distanciaHacia[s] = 0;
	num1.push_back(s);
	while(!num1.empty()){
		int v = num1.front();
		num1.pop_front();
		list<int>::iterator it;
		list<int> ady = G.getAdyacentes(v);
		for(it = ady.begin(); it != ady.end(); it++){
			int w = *it;
			if(!marcado[w]){
				aristaHacia[w] = v;
				distanciaHacia[w] = distanciaHacia[v] + 1;
				marcado[w] = true;
				num1.push_back(w);
			}
		}
	}
}

Buscar_Ruta_BFS::Buscar_Ruta_BFS(const Buscar_Ruta_BFS &otra){
	vertices = otra.vertices;
	marcado = new bool[vertices];
	distanciaHacia = new int[vertices];
	aristaHacia = new int[vertices];
	for(int v = 0; v < vertices; v++){
		marcado[v] = otra.marcado[v];
		distanciaHacia[v] = otra.distanciaHacia[v];
		aristaHacia[v] = otra.aristaHacia[v];
	}
}

Buscar_Ruta_BFS::~Buscar_Ruta_BFS(){
	delete[] marcado;
	delete[] distanciaHacia;
	delete[] aristaHacia;
}

bool Buscar_Ruta_BFS::existeCaminoHacia(int v){
	return marcado[v];
}

int Buscar_Ruta_BFS::getDistanciaHacia(int v){
	return distanciaHacia[v];
}

list<int> Buscar_Ruta_BFS::getRutaHacia(int v){
	list<int> ruta;
	if(existeCaminoHacia(v)){
		int i;
		for(i = v; distanciaHacia[i] != 0; i = aristaHacia[i]){
			ruta.push_front(i);
		}
		ruta.push_front(i);
	}
	return ruta;
}

#endif



