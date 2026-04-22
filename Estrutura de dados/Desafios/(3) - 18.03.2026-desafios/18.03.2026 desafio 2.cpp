#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> lista = {"A", "B", "C", "D", "E"};

    lista.reverse();

    for (string element : lista) {
        cout << element << endl;
    }

    return 0;
}
