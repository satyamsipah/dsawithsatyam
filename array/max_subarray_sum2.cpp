//Kadanes algorithms

#include <iostream>
using namespace std;

void maxsubarraySum(int *arr , int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum , currSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << "your maxsubarray sum is : " << maxSum << endl;
}

int main() {
    int arr[] = {1,-2,3,-4,5};
    int n = 5;
    maxsubarraySum(arr , n);
    
    return 0;
}