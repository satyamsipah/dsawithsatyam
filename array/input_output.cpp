#include <iostream>
using namespace std;

int main() {
    //int n;       //only applicable for new c++ version
    //cout << "enter length of array : ";
    //cin >> n;
    //int arr[n];

    int arr[5];
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;
}