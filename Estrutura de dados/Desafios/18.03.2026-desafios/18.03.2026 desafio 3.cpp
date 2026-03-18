#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> listaA = {15, 2, 8, 20, 1};
    list<int> listaB = {10, 5, 30, 4, 12};

    list<int> listaC = listaA;

    listaC.splice(listaC.end(), listaB);
    listaC.sort();

    cout << "Lista C (A + B) em ordem crescente:" << endl;
    for (int n : listaC) {
        cout << n << " ";
    }

    cout << endl;
    return 0;
}
