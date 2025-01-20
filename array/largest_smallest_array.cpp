#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,9,12};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[0];

    //largest
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    //smallest
    for(int i=0; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "largest = " << max << endl;
    cout << "Smallest = " << min << endl;
    return 0; 
}