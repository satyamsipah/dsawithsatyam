#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void insertionSort(int *arr, int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(arr[prev] > curr && prev >= 0) { // incresing order array
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {5,4,1,3,2};
    insertionSort(arr , 5);
    return 0;
}