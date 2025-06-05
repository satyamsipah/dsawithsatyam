#include <iostream>
using namespace std;

// abstract class
class Shape {
public:
    virtual void draw() = 0; //abstract function or pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "draw circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "draw square" << endl;
    }
};

int main() {
    Circle cir;
    cir.draw();

    Square sq;
    sq.draw();

    return 0;
}