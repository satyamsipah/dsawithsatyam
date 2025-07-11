#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void allOccur(vector<int> &vec, int n, int key, int idx, vector<int> &ans) {
    if(idx == n) return;

    if(vec[idx] == key) {
        ans.push_back(idx);
    }

    allOccur(vec, n, key, idx+1, ans);
}

int main() {
    vector<int> vec = {3,2,4,5,6,2,7,2,2};
    int n = vec.size();
    vector<int> ans;
    allOccur(vec, n, 2, 0, ans);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}