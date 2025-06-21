#include <iostream>
using namespace std;

int fib(int n) {
    if(n == 0 || n == 1) return n;
    
    return fib(n-1) + fib(n-2);
}

int main() {
    cout << fib(0) << endl; //0
    cout << fib(1) << endl; //1
    cout << fib(5) << endl; //5
    cout << fib(6) << endl; //8

    return 0;
}