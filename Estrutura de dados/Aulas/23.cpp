#include <iostream>
using namespace std;

void dobrarPorReferencia(int &numero) {
	numero *= 2;
}

int main() {
	int valor = 5;
	dobrarPorReferencia(valor);
	
	cout << "O valor dobrado eh: " << valor << endl;
	
	return 0;
}
