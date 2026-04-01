#include <iostream>
#include <string>

using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    int paginas;
    bool emprestado;

public:
    Livro(string titulo, string autor, int paginas) {
        this->titulo = titulo;
        this->autor = autor;
        this->paginas = paginas;
        this->emprestado = false;
    }

    void setTitulo(string novoTitulo) { titulo = novoTitulo; }
    string getTitulo() { return titulo; }

    void setAutor(string novoAutor) { autor = novoAutor; }
    string getAutor() { return autor; }

    void setPaginas(int novoPaginas) { paginas = novoPaginas; }
    int getPaginas() { return paginas; }

    void ler() {
        cout << "\n--- Informacoes do Livro ---" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Paginas: " << paginas << endl;
        cout << "Emprestado: " << (emprestado ? "Sim" : "Nao") << endl;
    }

    void emprestar() {
        this->emprestado = true;
    }

    bool estaemprestado() {
        return this->emprestado;
    }
};

int main() {
    Livro livro1("Albert Camus", "O Estrangeiro", 137);
    livro1.ler();

    Livro livro2("1984", "George Orwell", 328);
    livro2.emprestar();
    livro2.ler();

    return 0;
}
