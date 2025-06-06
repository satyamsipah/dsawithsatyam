#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "base" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived" << endl;
    }
};

int main() {
    Base *b = new Derived(); // this derived is point to base pointer b
    b-> print(); // Derived

    delete b;
    return 0;
}