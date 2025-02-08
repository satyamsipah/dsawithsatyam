#include <iostream>
#include <vector>
using namespace std;
        vector<int> twoSum(vector<int>& numbers, int target) {// doubts
            int st = 0, end = numbers.size() - 1;
            
            while (st < end) {
                if (numbers[st] + numbers[end] == target)
                    return {st + 1, end + 1};  // Return directly
    
                (numbers[st] + numbers[end] > target) ? end-- : st++;
            }
            return {}; // Should never reach here for valid inputs
        }
        
int main() {
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(numbers, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}