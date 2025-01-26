//Slightly optimized

#include <iostream>
using namespace std;

void maxsubarraySum(int *arr , int n) {
    int maxSum = INT_MIN;

    for(int st=0; st<n; st++) {
            int currSum = 0;
        for(int end=st; end<n; end++) {
                currSum = currSum + arr[end];
            maxSum = max(maxSum , currSum);
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