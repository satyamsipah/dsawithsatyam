#include <iostream>
using namespace std;

int clearIthbit(int nums, int i) {
    int bitmask = ~(1 << i);
    return (nums & bitmask);
}

int main() {
    cout << clearIthbit(6, 1) << endl;
    return 0;
}