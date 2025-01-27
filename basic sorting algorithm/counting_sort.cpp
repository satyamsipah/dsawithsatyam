#include <iostream>
#include <limits.h>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void countSort(int *arr, int n) {
    int freq[100000] = {0}; // range
    int minVal = INT_MAX; 
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    //1st step
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }

    //2nd step
    for(int i=minVal, j=0; i<=maxVal; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {1,3,2,3,4,7,1,4};
    countSort(arr, 8);
    return 0;
}