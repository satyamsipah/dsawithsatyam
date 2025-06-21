#include <iostream>
using namespace std;

int numbers(int n) {
    if(n == 1) return 1;

    return n + numbers(n-1);
}

int main() {
    cout << numbers(10) << endl;

    return 0;
}