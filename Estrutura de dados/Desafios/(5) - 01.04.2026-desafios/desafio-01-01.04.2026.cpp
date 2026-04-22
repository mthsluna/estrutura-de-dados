#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
    string cor;
    int velocidadeMaxima;
    int ano;
    string modelo;
    string marca;

public:
    Carro(string cor, int velocidadeMaxima, int ano, string modelo, string marca) {
        this->cor = cor;
        this->velocidadeMaxima = velocidadeMaxima;
        this->ano = ano;
        this->modelo = modelo;
        this->marca = marca;
    }

    void setCor(string novaCor) { cor = novaCor; }
    string getCor() { return cor; }

    void setVelocidadeMaxima(int novaVel) { velocidadeMaxima = novaVel; }
    int getVelocidadeMaxima() { return velocidadeMaxima; }
    
    void setAno(int novoAno) { ano = novoAno; }
    int getAno() { return ano; }

    void setModelo(string novoModelo) { modelo = novoModelo; }
    string getModelo() { return modelo; }

    void setMarca(string novaMarca) { marca = novaMarca; }
    string getMarca() { return marca; }

    void mostrarInfo() {
        cout << "\n--- Informacoes do Veiculo ---" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;    
        cout << "Ano: " << ano << endl;
        cout << "Cor: " << cor << endl;
        cout << "Velocidade Maxima: " << velocidadeMaxima << " km/h" << endl;
    }
};

int main() {
    Carro carro1("Preto", 228, 1990, "300E", "Mercedes");
    carro1.mostrarInfo();
    
    Carro carro2("Prata", 200, 2023, "Civic", "Honda");
    carro2.mostrarInfo();

    return 0;
}
