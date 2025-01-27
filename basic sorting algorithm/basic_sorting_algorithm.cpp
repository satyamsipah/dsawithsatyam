#include <iostream>
#include <limits.h>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<(n-i-1); j++) {
            if(arr[j] < arr[j+1]) { // descending order
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printArr(arr, n);
}

void selectionSort(int *arr, int n) {
    for(int i=0; i<(n-1); i++) {
        int minIdx = i;
        //loop for find max
        for(int j=i+1; j<n; j++) {
            if(arr[j] > arr[minIdx])  //Descending order
                minIdx = j;
        }
        swap(arr[i],arr[minIdx]);
    }
    printArr(arr, n);
}

void insertionSort(int *arr, int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(arr[prev] < curr && prev >= 0) { // decreasing order array
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    printArr(arr, n);
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
        while(freq[i] < 0) { // descending order
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr, n);
}

int main() {
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = 10;

    bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr, n);
    countSort(arr, n);

    return 0;
}