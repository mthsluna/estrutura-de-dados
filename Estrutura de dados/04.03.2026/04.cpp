#include <iostream>
using namespace std;

int main() {
	int a[5], b[5], c[5];
	int i;
	
	cout << "##### VETOR A #####"<< endl;
	for (i = 0; i < 5; i++){
		cout << "Informe um valor: ";
		cin >> a[i];
	}
	
	cout << "\n";
	cout << "##### VETOR B #####"<< endl;
	for (i = 0; i < 5; i++){
		cout << "Informe um valor: ";
		cin >> b[i];
	}
	
	cout << "\n";
	cout << "#################################";
	cout << "\n";
	cout << "\n";
	
	cout << "SOMA DOS VALORES" << endl;
	for (i = 0; i < 5; i++){
		c[i] = a[i] + b[i];
		
		cout << c[i] << endl;
		
	}	

	
}
