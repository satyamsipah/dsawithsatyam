#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "eats\n";
    }
    void breathe() {
        cout << "breathe\n";
    }
};

class Mammal : public Animal {
public:
    void bloodtype() {
        string bloodtype = "warm";
        cout << bloodtype << endl;
    }
};

class Dog : public Mammal {
public:
    void tailwag() {
        cout << "dog can do tailwag\n";
    }
};

int main() {
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.bloodtype();
    d1.tailwag();

    return 0;
}