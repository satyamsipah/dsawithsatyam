#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "constructor of parent A" << endl;
    }

    ~A() {
        cout << "destructor of parent A" << endl;
    }

};

class B : public A {
public:
    B() {
        cout << "constructor of child B" << endl;
    }

    ~B() {
        cout << "destructor of child B" << endl;
    }
};

int main() {
    B obj; // cons of parent , cons of child , destr of child , destr of parent 

    return 0;
}