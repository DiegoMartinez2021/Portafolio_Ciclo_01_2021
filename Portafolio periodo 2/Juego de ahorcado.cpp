#include<iostream> // Entrada/salida
#include<array> // Arreglos
#include<cstdlib> // Random
#include<ctime> // Inicializar random
#include<cctype> // Funciones para caracteres
#include<string> // Funciones para cadenas
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

const int elementos = 25;	

array<string, elementos> franquicias = {
	"Assassin's Creed", "Battlefield", "Call of Duty",
	"Diablo", "Dragon Quest", "Fallout", "Final Fantasy",
	"Gran Turismo", "Grand Theft Auto", "Halo", "Just Dance",	
	"Metal Gear", "Minecraft", "Need for Speed", "Resident Evil",
	"Star Wars", "Street Fighter", "Super Mario", "Super Smash Bros",
	"Tetris", "The Elder Scrolls", "The Legend of Zelda",
	"The Sims", "Tomb Raider", "Uncharted"
};

// Elige al azar uno de los elementos del arreglo
string choseElement(array<string, elementos> &franquicias);

// Inicializa la palabra del jugador con guiones bajos
// Devuelve la cantidad de letras a adivinar en la palabra
int startResp(char resp[], string palabra);

// Solicita al usuario que ingrese una letra
// y la devuelve a la función desde donde se invoca
char pedirLetra(char resp[]);

// Valida si la letra ingresada es parte de la palabra
int validarLetra(char resp[], string palabra, char letra);

// Dibuja la figura de un ahorcado
void dibujarAhorcado(int errores, int letrasRestantes, string palabra);

// Jugar al ahorcado
void play();

// Elegir una opcion de menu
int elegirOpcion();

// Realizar busqueda binaria en un arreglo
int busquedaBinaria(string arr[25], string valorBus);

// Busca una franquicia ingresada por el usuario en el arreglo de franquicias
void buscarFranquicia();

int main(){
	
	int opcion;
	opcion = elegirOpcion();
	while(opcion != 3){
		switch(opcion){
			case 1:
				play();
				break;
			case 2: 
				buscarFranquicia();
				break;	
		}
		cout << "\n";
		opcion = elegirOpcion();
	}
	cout << "Que tengas un buen dia."<<endl;
	return 0;
}

int elegirOpcion() {
	
	int opcion;
		cout << "Que desea hacer?" << endl;
		cout << "1- Jugar al ahorcado" << endl;
		cout << "2- Buscar mi franquicia favorita" << endl;
		cout << "3- Salir" << endl;
		cout << "Su eleccion: ";
		cin >> opcion;
		//system("CLS");// Limpiar la pantalla al volver a jugar
			while(cin.fail() || !(opcion >= 1 && opcion <= 3)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Opcion no valida. Su eleccion: ";
		cin >> opcion;
	}
		cout << endl;
		
	return opcion;
}

void play(){
	
	string palabra = choseElement(franquicias);
	char respuesta[25];
	char letra;
	int letrasRestantes = startResp(respuesta, palabra);
	int intentosFallidos = 0;
	int letrasCorrectas = 0;
	
	cout << "juguemos al ahorcado!!!"<<endl;
	while(letrasRestantes > 0 && intentosFallidos < 7){
		letra = pedirLetra(respuesta);
		letrasCorrectas = validarLetra(respuesta, palabra, letra);
		if(letrasCorrectas > 0){
			letrasRestantes -= letrasCorrectas;
			
		}else{
			intentosFallidos++;
		}
		dibujarAhorcado(intentosFallidos, letrasRestantes, palabra);
	}
	
}

// Inicializa la palabra del jugador con guiones bajos
// Devuelve la cantidad de letras a adivinar en la palabra
int startResp(char respuesta[], string palabra){
	int longitudPalabra = palabra.length();
	int cantidadLetras = 0;
	for(int i=0; i < longitudPalabra; i++){
		char caracter = palabra.at(i);
		if(isalpha(caracter)){
			respuesta[i] = '_';
			cantidadLetras++;
		}
		else{
			respuesta[i] = caracter;
		}
		respuesta[longitudPalabra] = '\0';//caracter de fin de cadena
		return cantidadLetras;
	}
}

// Elige al azar uno de los elementos del arreglo
string choseElement(array<string, elementos> &arr){
	
// variable estática, "recuerda" su valor
// se usa para plantar la semilla en el generador
// de numeros aleatorios solo una vez

static bool semillaPlantada = false;
	if (!semillaPlantada){
		srand(time(NULL));
		semillaPlantada = true;
	}
// Genera un número aleatorio entre 0 y 24
// y devuelve el elemento en ese indice

	int indice = rand() % arr.size();
	return arr[indice];
	
}
	
/// Funcion para pedir y verificar la letra

char pedirLetra(char resp[]){
	cout << "Ingrese una letra: "; cin >> resp;
	
		if(isdigit(resp[0])){
			cout << " ... "<<endl;
		}else cout << "Letra: "<<resp<<endl;
		
		if(isdigit(resp[0])){
			cout << "Caracter invalido, intente de nuevo."<<endl;
		}else{
			return 0;
		}	
	}
///////////////////////////////////////

int validarLetra(char respuesta[], string palabra, char letra){
	int veces = 0;
	for(int i=0; i<palabra.length(); i++){
		if(tolower(palabra.at(i)) == tolower(letra) && respuesta[i] != palabra.at(i)){
			respuesta[i] = palabra.at(i);
			veces++;
		}
	}
	return veces;
}

void dibujarAhorcado(int errores, int letrasRestantes, string palabra) {
cout << "Intentos fallidos: " << errores << endl;
cout << "   ____" << endl;
cout << "  |    |" << endl;
cout << "  | " << (errores > 0 ? "   o" : "") << endl;
cout << "  | " << (errores > 1 ? "  /" : "") << (errores > 3 ? "|"
 : " ") << (errores > 2 ? "\\" : "") << endl;
cout << "  | " << (errores > 4 ? "   |" : "") << endl;
cout << "  | " << (errores > 5 ? "  / " : " ") << (errores > 6 ? "\\"
 : "") << endl;
cout << " _|_" << endl;
cout << "|   |__________" << endl;
cout << "|              |" << endl;
cout << "|              |" << endl;
cout << "|______________|" << endl << endl;
if (errores > 6) {
cout << "Te has ahorcado." << endl;
cout << "La franquicia era " << palabra << endl;
}
else if (letrasRestantes == 0) {
cout << "Felicidades! Has adivinado." << endl;
}
}

// Funcion Busqueda Binaria
int busquedaBinaria(array<string, elementos> &arr, string valorBus){
	
	int low = 0;
	int sup = (int) franquicias.size()-1;
	int mid;
	int index = -1;
	
	while(low <= sup){
		mid = low + (sup - low)/2;
		if(valorBus < arr[mid]) sup = mid-1; 
		else if(valorBus > arr[mid]) low = mid+1;
		else{
			index = mid;
			break;	
		} 
	}
	  return index;   //cout << "El indice del valor es de: "<<index<<endl;
}

void buscarFranquicia(){
	
	string franquicia;
	int posicion;
	cin.clear();
	cin.ignore(1000, '\n');
	
	cout << "Buscar una franquicia en el top 25 de ventas" << endl;
	cout << "Nombre de la franquicia: "; cin >> franquicia;

	if(busquedaBinaria(franquicias, franquicia) != -1){
		cout << "Genial!!, su franquicia se encuentra en el top!"<<endl;
	}else{
		cout << "Su franquicia no es tan comercial, sus gustos son refinados."<<endl;   
	}																						

}





























