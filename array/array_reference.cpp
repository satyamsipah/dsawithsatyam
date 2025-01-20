#include <iostream>
using namespace std;

int main() {
    int a = 5;      //array name can be conveted to pointer
    int *ptr = &a;
    cout << *ptr << endl;

    int arr[] = {6,8,2,5,1};
    cout << *arr << endl;       //arr[0]
    cout << *(arr+1) << endl;   //arr[1]      
    cout << *(arr+2) << endl;   //arr[2]
    cout << *(arr+4) << endl;   //arr[4]
    return 0;
}