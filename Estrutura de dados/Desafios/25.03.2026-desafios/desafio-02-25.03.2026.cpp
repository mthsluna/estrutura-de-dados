#include <iostream>
using namespace std;

double calcularMedia(double numero1, double numero2) {
	double soma = numero1 + numero2;
	return (float)soma / 2.0;
}

int main() {
	double valor1 = 5.5;
	double valor2 = 7.0;
	
	double resultado = calcularMedia(valor1, valor2);
	
	cout << "A media de " << valor1 << " e " << valor2 << " eh " << resultado << endl;
	
	return 0;
	
}
