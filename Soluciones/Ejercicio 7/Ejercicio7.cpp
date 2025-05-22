#include <iostream>
using namespace std;

class Instrumento {
public:
    Instrumento(){};
    virtual void tocar() {
        cout << "prueba" << endl;
    }
};

class Guitarra : public Instrumento {
public:
    Guitarra(){};
    void tocar() override {
        cout << "la cucaracha" << endl;
    }
};

void probar(Instrumento* inst) {
    inst->tocar();
}

int main() {
    Guitarra g;
    probar(&g);
    return 0;
}