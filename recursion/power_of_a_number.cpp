#include <iostream>
using namespace std;

int power(int b, int p) {
    if(p == 0) return 1; // base case

    return b * power(b, p-1); // recursive call
}

int main() { 
    cout << power(2, 3) << endl;

    return 0;
}