#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a) {
        studentID = id;
    }

    void DisplayStudentinfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "studentID : " << studentID << endl;
    }
};

int main() {
    Student student("Satyam", 20, "230101041");
    student.DisplayStudentinfo();

    return 0;
}