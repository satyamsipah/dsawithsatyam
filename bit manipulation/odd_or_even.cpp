#include <iostream>
using namespace std;

void OddorEven(int nums) {
    if(!(nums & 1)) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}

int main() {
    OddorEven(3);
    OddorEven(10);

    return 0;
}