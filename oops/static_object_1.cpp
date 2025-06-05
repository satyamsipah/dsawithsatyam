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
    int a = 0;
    if(a == 0) {
        Example eg1;
    }

    cout << "code ending" << endl;
    return 0;
}