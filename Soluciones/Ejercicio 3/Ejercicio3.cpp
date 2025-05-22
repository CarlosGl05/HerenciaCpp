#include <iostream>
using namespace std;

class Vehiculo {
public:
    void encender() {
        cout << "Vehículo encendido" << endl;
    }
};

class Coche : public Vehiculo { // antes era private, ahora es public
};

int main() {
    Coche miCoche;
    miCoche.encender(); // ¿Por qué falla? se estaba creando una herencia privada cuando el mienbro es público, por lo que solo se debe cambiar a herencia pública
    return 0;
}