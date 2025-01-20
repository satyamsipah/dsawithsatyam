#include <iostream>
using namespace std;

int main() {
    int marks[50];  //index is only from 0 to 49
    cout << marks[0] << endl;   //garbage value
    cout << marks[1] << endl;   //garbage value
    cout << marks[49] << endl;  //garbage value
    cout << marks[50] << endl;  //warning
    cout << marks[51] << endl;  //warning
    cout << sizeof(marks) << endl;

    int age[50] = {1,2,3};
    cout << age[0] << endl;     //1
    cout << age[1] << endl;     //2
    cout << age[2] << endl;     //3
    cout << age[3] << endl;     //0
    cout << age[25] << endl;    //0

    int num[] = {1,2,3};
    cout << num[0] << endl;     //1
    cout << num[1] << endl;     //2
    cout << num[2] << endl;     //3
    cout << num[3] << endl;     //warning
    cout << num[20] << endl;    //warning

    return 0;
}