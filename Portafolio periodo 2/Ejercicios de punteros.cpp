// Actividad de punteros
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
	
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	
	cout << (void*)c = endl;
	cout << (void*)d = endl;
	
	p3 = &d;
	cout << "*p3 = "<<p3<<endl;
	
	p3 = p1;
	cout << "*p3 = "<<p3<<endl;
	cout << "addr = " << (void*)p3<<endl;
	
	*p1 = *p2;
	cout << "*p1 = "<< p1 << ", p1 = "<<(void*)p1<<endl;
	
	
	return 0;
}
