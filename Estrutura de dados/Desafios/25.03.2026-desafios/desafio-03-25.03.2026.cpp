#include <iostream>
using namespace std;

bool ehPar(int numero){
	return numero % 2 == 0;
}

int main(){
	int numero = 7;
	
	if (ehPar(numero)){
		cout << numero << " Eh um numero par." << endl;
	}
	
	else {
		cout << numero << " Eh um numero impar." << endl;
	}
	
	return 0;
	
}
