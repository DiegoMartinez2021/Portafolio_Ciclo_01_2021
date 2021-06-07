#include<iostream>
using namespace std;

int main(){
	
	char bloques[3] = {'A','B','C'};
	char *ptr = &bloques[0];
	char temp;
	
	temp = bloques[0];
	cout << temp << endl;
	
	temp = *(bloques + 2);
	cout << temp << endl;
	
	temp = *(ptr + 1);
	cout << temp << endl;
	
	temp = *ptr;
	cout << temp << endl;
	
	return 0;	
}
