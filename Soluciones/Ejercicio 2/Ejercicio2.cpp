#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    Persona(int edad, string nombre) : edad(edad), nombre(nombre){;}
};

class Empleado : protected Persona {
public:
    Empleado(int edad, string nombre) : Persona(edad,nombre){};
    void mostrarDatos() {
        cout << nombre << " tiene " << edad << " años" << endl;
    }
};

int main() {
    Empleado emp(18,"Carlos");
    emp.mostrarDatos();
    return 0;
}