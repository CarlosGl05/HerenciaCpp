#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    Persona(string nom): nombre(nom){};
};

class Cliente : protected Persona {
public:
    Cliente(string nombre): Persona(nombre){}; // faltaba el constructor en ambas clases
    void mostrar() {
        cout << nombre << endl; // Error si se cambia a private
    }
};

int main() {
    Cliente c("Carlos");
    c.mostrar();
    return 0;
}