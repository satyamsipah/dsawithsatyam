#include <iostream>
using namespace std;

int number(int n) {
    if(n == 1) {
        cout << n << " ";
        return 1;

    }

    number(n-1);
    cout << n << " ";
}

int numbers(int n) {
    if(n == 1) {
        cout << n;
        return 1;
    }

    cout << n << " ";
    numbers(n-1);
}

int main() {
    number(10);
    cout << endl;
    numbers(10);
    return 0;
}