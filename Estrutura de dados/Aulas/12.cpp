#include <iostream>
using namespace std;

int main(){
	int num = 0, i, qtd, num2 = 0;
	
	cout << "Digite um numero: ";
	cin >> num;
	num2 = num;
	
	while (num > 0){
		num /= 100;
		qtd++;
	}
	
	cout << "O numero " << num2 << " tem " << qtd << " digitos";
	
}
