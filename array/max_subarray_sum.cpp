//Brute Force approach 

#include <iostream>
using namespace std;

void maxsubarraySum(int *arr , int n) {
    int maxSum = INT_MIN;

    for(int st=0; st<n; st++) {
        for(int end=st; end<n; end++) {
            int currSum = 0;
            for(int i=st; i<=end; i++) {
                currSum = currSum + arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum , currSum);
        }
        cout << endl;
    }
    cout << "your maxsubarray sum is : " << maxSum << endl;
}

int main() {
    int arr[] = {1,-2,3,-4,5};
    int n = 5;
    maxsubarraySum(arr , n);
    
    return 0;
}