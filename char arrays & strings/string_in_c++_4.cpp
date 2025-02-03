#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello satyam maddheshiya";

    cout << str.length() << endl;

    cout << str.at(3) << endl;
    cout << str[3] << endl;

    cout << str.substr(2, 6) << endl;

    cout << str.find("a") << endl;
    cout << str.find("a", 9) << endl;

    return 0;
}