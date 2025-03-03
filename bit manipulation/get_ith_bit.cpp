#include <iostream>
using namespace std;

int getIthbit(int nums, int i) {
    int bitMask = 1 << i;
    if(!(nums & bitMask)) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    cout << getIthbit(6, 2) << endl;
    cout << getIthbit(6, 3) << endl;
    return 0;
}