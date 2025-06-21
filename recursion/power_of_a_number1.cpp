#include <iostream>
using namespace std;

int power(int x, int n) {
    if(n == 0) return 1; //base case

    int half = power(x, n/2); //recursive call

    if(n % 2 == 0) { //work
        return half * half;
    } else {
        return x * half * half;
    }
}

int main() { 
    cout << power(2,10) << endl;

    return 0;
}