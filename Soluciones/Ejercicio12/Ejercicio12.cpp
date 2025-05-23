#include <iostream>
using namespace std;

class Dispositivo{
    public:
    string marca;
    Dispositivo(string ma): marca(ma){};
};

class TV: virtual public Dispositivo{
    public:
    TV(string marca): Dispositivo(marca){};
    void prender(){
        cout << "TV prendida" << endl;
    }
    void apagar(){
        cout << "TV apagada" << endl;
    }
};

class DVD: virtual public Dispositivo{
    public:
    DVD(string marca): Dispositivo(marca){};
    void usar(){
        cout << "el dvd se está usando" << endl;
    }
};

class controlRemoto: public TV, public DVD{
    public:
    controlRemoto(string marca) : Dispositivo(marca),  TV(marca), DVD(marca){};
    void todo(){
        usar();
        prender();
        apagar();
    }
};

int main(){
    controlRemoto con("Roku");

    con.todo();
    return 0;
}