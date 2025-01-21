#include <iostream>
using namespace std;

void printArr(int *ptr, int n) {
    for(int i=0; i<n; i++) {
        cout << *(ptr+i) << endl;
    }
}

int main() {
    //increment and decrement operators

    int x = 25;
    int *ptr = &x;
    
    cout << ptr << endl;

    ptr++;  // ptr++ = ++ptr
    cout << ptr << endl;

    ptr--;  // ptr-- = --ptr
    cout << ptr << endl;

    //addition and substraction of constant 

    int y = 25;
    int *yptr = &y;

    cout << yptr << "\n";   //why yptr and yptr-3 not same in this case
    cout << yptr +3 << "\n";
    cout << yptr -3 << "\n";

    int arr[] = {2,4,6,8,10,12};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);

    //addition and substraction of pointers

    //ptr1 + ptr 2  => invalid
    int z = 10;
    int *ptr2 = &z;
    int *ptr3 = ptr2 +3;

    cout << (ptr3-ptr2) << endl;

    int *ptr4 = arr;
    int *ptr5 = arr + 4;
    cout << *ptr5 << endl;
    cout << *ptr4 << endl;

    cout << (ptr5-ptr4) << endl;

    //Comparison

    cout << (ptr4 <= ptr5) << endl;
    cout << (ptr4 > ptr5) << endl;
    cout << (ptr4 == ptr5) << endl;


    return 0;
}