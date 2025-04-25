#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float cgpa;

public:
    //setters
    void setName(string nameVal) {
        name = nameVal;
    }
    
    //getters
    string getName() {
        return name;
    }
};

int main() {
    Student s1;
    s1.setName("satyam");
    cout << s1.getName() << endl;
    return 0;
}