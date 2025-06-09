#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) { //Base case
        return 1;
    }

    return n * factorial(n-1);
}

int main() {
    cout << factorial(5) << endl;

    return 0;
}
