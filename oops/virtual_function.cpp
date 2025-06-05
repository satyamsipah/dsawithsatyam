#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "parent class is showing" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "child class is showing" << endl;
    }
};

int main() {
    Child child1;
    child1.show();

    Parent *ptr;
    ptr = &child1; // Run time binding
    ptr->show(); // Virtual funtion

    return 0;
}