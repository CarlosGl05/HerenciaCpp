#include <iostream>
using namespace std;

class Usuario{
    public:
        string nombre;
        int edad;

        Usuario(int e, string no): edad(e), nombre(no){};
        void login(){
            cout << nombre << " de " << edad << " años se ha logueado" << endl;
        }
};

class Moderador : public Usuario{
    public:
    Moderador(int edad, string nombre ): Usuario(edad, nombre){};
    void moderar(){
        cout << nombre << " de " << edad << " años ahora es moderador" << endl;
    }
};

class Admin: public Moderador{
    public:
    Admin(int edad, string nombre): Moderador(edad, nombre){};
    void banear(){
        cout << nombre << " de " << edad << " años baneó a alguien" << endl;
    }
};

int main(){
    Admin ad(18, "Carlos");
    ad.banear();
    ad.moderar();
    ad.login();
}