#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vec, int target) {
    int st = 0, end = vec.size()-1;
    int currSum = 0;
    vector<int> ans;
    while(st < end) {
        currSum = vec[st] + vec[end];
        if(currSum == target) {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        } else if(currSum > target) {
            end--;
        } else {
            st++;
        }
    }
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}