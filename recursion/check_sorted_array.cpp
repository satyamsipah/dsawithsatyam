#include <iostream>
using namespace std;

bool checkSorted(int *arr, int n, int i) {
    if(i == n-1) {
        return true;
    }

    if(arr[i] > arr[i+1]) {
        return false;
    }

    return checkSorted(arr, n, i+1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int arr1[] = {1,3,5,4,2};
    int n = sizeof(arr) / sizeof(int);

    cout << checkSorted(arr, n, 0) << endl; //1
    cout << checkSorted(arr1, n, 0) << endl; //0

    return 0;
}