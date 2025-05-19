#include <iostream>
using namespace std;


class Animal {
public:
    string nombre;

    Animal(string nom) : nombre(nom) {}

    void comer() {
        cout << nombre << " come" << endl;
    }
};

class Perro : public Animal {
    public:
    Perro(string nom) : Animal(nom) {}
    void ladrar(){
        cout << nombre << " hace guau guau" << endl;

    }
};


int main(){
    Perro a("perro");
    a.ladrar();
    a.comer();

    return 0;
}