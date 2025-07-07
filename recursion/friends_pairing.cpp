#include <iostream>
using namespace std;

int friendsPairing(int n) {
    if(n == 1 || n == 2) return n;
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}

int main() {
    cout << friendsPairing(1) << endl; //1
    cout << friendsPairing(2) << endl; //2
    cout << friendsPairing(3) << endl; //4
    cout << friendsPairing(4) << endl; //10
    cout << friendsPairing(5) << endl; //26
    return 0;
}