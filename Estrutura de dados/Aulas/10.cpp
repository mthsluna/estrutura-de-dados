#include <iostream>
using namespace std;

int main(){
	int num = 0, i, par = 0, qtd=0;
	
	for (i = 1; i <= 10; i++){
		cout << "Insira um num: ";
		cin >> num;
		
		if (num % 2 == 0){
			qtd++;
		}
	}
	
	cout << "Quantidade de numeros pares: " << qtd;
	
}
