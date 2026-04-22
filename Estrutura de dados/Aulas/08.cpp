#include <iostream>
using namespace std;

int main() {
	int a[5], i;
	
	for (i = 0; i < 5; i++){
		cout << "Informe um valor: ";
		cin >> a[i];
	}
	
	cout << "Valor informados: ";
	for (i = 0; i < 5; i++){
		cout << a[i] << " ";
	}
	
}
