#include<iostream>
#include<iomanip>
using namespace std;
const int estudiantes = 3;
const int evaluaciones = 4;

double min(double[][evaluaciones], int, int);
double max(double[][evaluaciones], int, int);
double prom(double[], int);
void printArray(double[][evaluaciones], int, int);

int main(int argc, const char * argv[]){
	double notaEstudiantes[estudiantes][evaluaciones] = 
	{{7.7,6.8,8.6,7.3},
	 {9.6,8.7,8.9,7.8},
	 {7.0,8.0,8.6,8.1}};
	
	cout << "El arreglo es: "<<endl;
	printArray(notaEstudiantes, estudiantes, evaluaciones);
	
	cout << setprecision(1);
	cout << "\n\nNota maxima: " << max(notaEstudiantes, estudiantes, evaluaciones);
	cout << "\n\nNota minima: " << min(notaEstudiantes, estudiantes, evaluaciones);
	
	for(int i =0; i<estudiantes; i++){
		cout << "\nPromedio estudiante ["<<i<<"]: ";
		cout << prom(notaEstudiantes[i], evaluaciones);
	}
	
	cout << endl;
	
	return 0;
}

double min(double notas[][evaluaciones], int alumnos, int examenes){
	double notaMin = 10.0;	
	
	for(int i=0; i<alumnos; i++){
		for(int j=0; j<examenes; j++){
			if(notas[i][j] < notaMin){
				notaMin = notas[i][j];
			}
		}
	}
	return notaMin;
}

double max(double notas[][evaluaciones], int alumnos, int examenes){
	double notaMax = 0.0;
	
	for(int i=0; i<alumnos; i++){
		for(int j=0; j<examenes; j++){
			if(notas[i][j] > notaMax){
				notaMax = notas[i][j];
			}
		}
	}
	return notaMax;
}

double prom(double conjuntoDeNotas[], int examenes){
	double total = 0.0;
	
	for(int i=0; i<examenes; i++){
		total += conjuntoDeNotas[i];
	}
	return total / examenes;
}

void printArray(double notas[][evaluaciones], int alumnos, int examenes){
	cout << "             [0]  [1]  [2]  [3]";
	
	for(int i=0; i<alumnos; i++){
		cout << "\n\nNotas de estudiantes ["<<i<<"] ";
		for(int j=0; j<alumnos; j++){
			cout << setw(5) << fixed << setprecision(1) << notas[i][j];
		}
	}
	
}




























