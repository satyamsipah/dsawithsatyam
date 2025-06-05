#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "parent class showing.." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "child class showing.." << endl;
    }
};

int main() {
    Child child1;
    child1.show();
    
    return 0;
}