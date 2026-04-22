#include <iostream>
using namespace std;

int main(){
	int N = 0, i, cont = 0;
	
	cout << "Digite um num inteiro: ";
	cin >> N;
	
	
	i = 1;
	cont = 0;
	
	while (i <= N) {
		if (i % 2 == 0){
			cont++;
		}
	i++;
	}
	
	cout << "A quantidade de numeros pares eh: " << cont << endl;
	
}
