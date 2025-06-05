// Normal Object
#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "constructor..." << endl;
    }

    ~Example() {
        cout << "Destructor..." << endl;
    }

};

int main() {
    Example eg1;

    cout << "code ending" << endl;
    return 0;
}