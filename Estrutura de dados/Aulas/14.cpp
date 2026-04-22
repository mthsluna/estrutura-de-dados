#include <iostream>
using namespace std;

int main(){
	int i, num[5], soma = 0;
	
	for (i = 0; i < 5; i++){
		cout << "Digite um num: ";
		cin >> num[i];
		
		soma += num[i];
	}
	
	cout << "Resultado: " << soma;
	
}
