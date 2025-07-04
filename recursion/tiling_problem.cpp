#include <iostream>
using namespace std;

int tp(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }

    return tp(n-1) + tp(n-2);
}

int main() {
    cout << tp(0) << endl; //1
    cout << tp(1) << endl; //1
    cout << tp(2) << endl; //2
    cout << tp(3) << endl; //3
    cout << tp(4) << endl; //5
    cout << tp(5) << endl; //8
    
    return 0;
}