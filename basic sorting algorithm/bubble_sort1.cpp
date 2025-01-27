#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
}

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<(n-i-1); j++) {
            if(arr[j] < arr[j+1]) { //decending order
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {2,5,1,4,3};
    int n = 5;
    bubbleSort(arr, n);
    return 0;
}