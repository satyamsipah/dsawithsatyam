// Static variables in function
#include <iostream>
using namespace std;

void counter() {
    static int count = 0; //this line is not count again when calling function 
    count++;
    cout << "count : " << count << endl;
}

int main() {
    counter(); //1
    counter(); //2
    counter(); //3

    return 0;
}