#include <iostream>
using namespace std;

class Animal {
public:

    void eat() {
        cout << "can eats\n";
    }

    void breathe() {
        cout << "can breathe\n";
    }
};

class Fish : public Animal {
public:

    void swims() {
        cout << "can swim\n";
    }
};

int main() {
    Fish f1;
    f1.eat();
    f1.breathe();
    f1.swims();

    return 0;
}