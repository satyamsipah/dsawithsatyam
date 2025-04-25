#include <iostream>
using namespace std;

class Car {
public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color) {
        cout << "car is running..\n";
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }

    Car(Car &original) {
        cout << "copying car..\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car() {
        cout << "deleting objects..\n";
        if(mileage != NULL) {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main() {
    Car c1("maruti 800", "white");
    cout << c1.name << endl;
    cout << c1.color << endl;
    cout << *c1.mileage << endl;

    return 0;
}