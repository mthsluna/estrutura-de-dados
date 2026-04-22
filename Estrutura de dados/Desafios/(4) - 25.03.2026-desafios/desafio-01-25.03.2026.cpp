#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

float divisao(int a, int b) {
    return (float)a / b; 
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int main() {
    int num, num2;
    int resultadosoma, resultadosub, resultadomult;
    float resultadodiv;
    
    cout << "Digite o primeiro num: ";
    cin >> num;
    
    cout << "Digite o segundo num: ";
    cin >> num2;
    
    resultadosoma = soma(num, num2);
    resultadodiv = divisao(num, num2);
    resultadosub = sub(num, num2);
    resultadomult = mult(num, num2);
    
    cout << "A soma de " << num << " e " << num2 << " e: " << resultadosoma << endl;
    cout << "A div de " << num << " e " << num2 << " e: " << resultadodiv << endl;
    cout << "A sub de " << num << " e " << num2 << " e: " << resultadosub << endl;
    cout << "A mult de " << num << " e " << num2 << " e: " << resultadomult << endl;

    return 0;
}
