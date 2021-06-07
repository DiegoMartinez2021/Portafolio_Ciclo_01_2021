#include<iostream>
using namespace std;

int main(){
	
	int i, k;
	int *p;
	int **pp;
	char c = 'A';
	char *pe = &c;
	
	i = 42;
	k = i;
	p = &i;
	pp = &p;
	
	cout << " i = "<< i << "&i = "<< (void*)&i << endl;
	cout << " k = "<< k << "&k = "<< (void*)&k << endl;
	cout << " p = "<< p << "&p = "<< (void*)&p << "*p = " << *p << "**pp = "<< **pp << endl;
	
	*p = 75;
	
	cout << " i = "<< i << "&i = "<< (void*)&i << endl; 
	
	cout << " pp = "<< pp << "&pp = "<< (void*)&pp << "*p = " << *p << "**pp = "<< **pp << endl;

	
	return 0;	
}
