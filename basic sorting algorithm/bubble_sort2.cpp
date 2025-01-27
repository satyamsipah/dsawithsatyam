#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
}

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false;    // to avoid unneccsory iteration if arr is already sorted 
        cout << "satyam";  // to check how many times this loop is running
        for(int j=0; j<(n-i-1); j++) {
            cout << "maddheshiya";  //  to check how many times this loop is running
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false) {   // if(!isSwap) is same
            return;
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    cout << bubbleSort(arr, n) << endl;
    return 0;
}