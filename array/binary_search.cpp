#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key) {
    int st = 0, end = n-1;
    
    while(st <= end) {
        int mid = (st + end) / 2;
        if(arr[mid] == key) {   // value found
            return mid;
        } else if (arr[mid] < key) {    //2nd Half
            st = mid + 1;
        } else {    //1st Half
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr, n, 16) << endl;
    return 0;
}