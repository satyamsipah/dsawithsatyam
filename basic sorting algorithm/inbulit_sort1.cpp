#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1,3,4,2,5,3,8,6};
    int n = 8;
    sort(arr, arr+8, greater<int>()); // sorting in decresing order 
    printArr(arr, n);
    return 0;
}