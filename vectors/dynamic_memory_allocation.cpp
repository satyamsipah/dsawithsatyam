#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "enter any number to print 1 to that number : ";
    cin >> size;

    int *ptr = new int[size];
    int x = 1;
    for(int i=0; i<size; i++) {
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }
    delete [] ptr;

    return 0;
}
