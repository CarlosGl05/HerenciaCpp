#include <iostream>
using namespace std;

class ReproductorMultimedia{
    public:

        ReproductorMultimedia(){};

        void reproducir(){
            cout << "el contenido se está reproduciendo" << endl;
        }

        void mostrar(){
            cout << "el contenido se está mostrando" << endl;
        }
};

class Reproductorvideo : public ReproductorMultimedia{
    public:
        Reproductorvideo(){};
};

class ReproductorAudio: public ReproductorMultimedia{
    public:
    ReproductorAudio(){};
};

int main(){

    ReproductorAudio a;
    Reproductorvideo b;
    a.mostrar();
    b.reproducir();

    return 0;
}