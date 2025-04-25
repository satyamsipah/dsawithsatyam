#include <iostream>
using namespace std;

class Car {
    string name;
    string color;

public:
    Car() {
        cout << "constructor without parameter\n";
    }

    Car(string name, string color) {
        cout << "construtor with parameter\n";
        this->name = name;
        this->color = color;
    }

    void start() {
        cout << "car has started..\n";
    }

    void stop() {
        cout << "car has stopped\n";
    }

    //getter
    string getname() {
        return name;
    }
};

int main() {
    Car c0; //non-parameter
    Car c1("maruti 800", "Red"); //parameter
    Car c2("fortuner", "black"); //parameter

    return 0;
}