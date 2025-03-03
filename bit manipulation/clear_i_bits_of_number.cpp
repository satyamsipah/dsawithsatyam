#include <iostream>
using namespace std;

void clearIbits(int nums, int i) {
    int bitmask = (~0) << i;
    nums = nums & bitmask;
    cout << nums << endl;
}

int main() {
    clearIbits(15, 2);
    return 0;
}