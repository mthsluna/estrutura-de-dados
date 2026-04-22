#include <iostream>
using namespace std;

void lerEntradaUsuario(int &valor) {
	cout << "Digite um num: ";
	cin >> valor;
}

int main(){
	int num;
	lerEntradaUsuario(num);
	
	cout << "Voce digitou: " << num << endl;
	
	return 0;
}
