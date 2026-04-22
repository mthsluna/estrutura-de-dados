#include <iostream>
#include <list>
using namespace std;

int main() {
	int soma = 0;
	int mult = 1;
    list <int> numList;
    numList.push_back(4);
    numList.push_back(4);
    numList.push_back(4);
    numList.push_back(6);
    numList.push_back(10);
    
    for (auto element : numList) {
    soma += element;
    mult *= element;
    }
    
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-" << endl;
    cout << "A soma da lista eh: " << soma << endl;
    cout << "A multiplicacao da lista eh: " << mult << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-" << endl;
    
    cout << endl;
    
    return 0;
}
