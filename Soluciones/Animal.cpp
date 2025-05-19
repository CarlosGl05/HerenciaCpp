#include <iostream>
using namespace std;


class Animal{
    public:
    void comer(){
        cout << "comer" << endl;
    }
};

class Perro : public Animal {
    public:
    void ladrar(){
        cout << "guau guau" << endl;

    }
};


int main(){
    Perro a;
    a.ladrar();
    a.comer();

    return 0;
}