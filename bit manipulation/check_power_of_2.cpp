#include <iostream>
using namespace std;

int isPowerOf2(int nums) {
    if(!(nums & (nums-1))) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << isPowerOf2(8) << endl;
    cout << isPowerOf2(12) << endl;
    return 0;
}