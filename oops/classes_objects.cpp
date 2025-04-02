#include <iostream>
using namespace std;

class Student { // Student is the classes name
    //properties
    string name;
    float cgpa;

    //methods
    void getpercentage() {
        cout << cgpa * 10 << endl;
    }
};

class user {
    int id;
    string username;
    string password;
    string bio;

    void deactivate() {
        cout << "deactivate the account" << endl;
    }
};

int main() {
    Student s1; //objects
    cout << sizeof(s1) << endl;
    return 0;
}
