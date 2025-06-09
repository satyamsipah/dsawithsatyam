#include <iostream>
using namespace std;

void number(int n) {
    if(n == 0) {
        return;
    }

    number(n-1);
    cout << n << " ";
}

void numbers(int n) {
    if(n == 0) {
        return;
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