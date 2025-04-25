#include <iostream>
using namespace std;

class Teacher {
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollnumber;
    float cgpa;
};

class TA : public Teacher, public Student {
public:
    string name;
};

int main() {
    TA ta1;
    ta1.name = "Satyam";
    ta1.rollnumber = 230101041;
    ta1.cgpa = 7.5;

    cout << ta1.name << endl;
    cout << ta1.rollnumber << endl;
    cout << ta1.cgpa << endl;

    return 0;
}