#include <iostream>
using namespace std;

int setIthbit(int nums, int i) {
    int bitmask = 1 << i;
    return (nums | bitmask);
}

int main() {
    cout << setIthbit(6, 3) << endl;
    return 0;
}