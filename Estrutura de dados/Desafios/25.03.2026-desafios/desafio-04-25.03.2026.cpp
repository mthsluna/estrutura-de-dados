#include <iostream>
using namespace std;

int calcularSoma(int num[4]){
	int total = 0;
	for (int i = 0; i < 4; i++){
		total += num[i];
	}
	return total;
}

int main(){
	int numero[4];
	
	for (int i = 0; i < 4; i++){
		cout << "Digite um num: ";
		cin >> numero[i];
	}
	
	int resultado = calcularSoma(numero);
	
	cout << "A soma eh: " << resultado << endl;
	
	return 0;
}
