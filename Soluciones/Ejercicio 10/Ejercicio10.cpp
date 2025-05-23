#include <iostream>
using namespace std;

class A { 
    public: 
    A(){};
    void imprimir() {
        cout << "A";    
    } 
};
class B : public A {
    public:
    B(){};
};
class C : public B{
    public:
    C(){};
};
class D : public C{
    public:
    D(){};
};

int main() {
    D obj;
    obj.imprimir(); // Error
    return 0;
}