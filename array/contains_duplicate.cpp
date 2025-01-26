#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(int *nums, int n) {
    sort(nums, nums + n);
    for(int i=1; i<n; i++) {
        if(nums[i-1] == nums[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {1,2,3,4,5,6,3};
    int n = 7;
    cout << containsDuplicate(nums , n) << endl;
    return 0;
}